/****************************************************************************
  This program finds groups of four numbers that when multiplied together
  equal 2984679959. The number of threads to use is specified near the
  start of the code. Try upping it if you have the compute resources! If it 
  seems like your program is not working because of slow program progress, 
  search the Internet for "The Combinatorial Explosion" 

  Compile with:

    cc -o factorise_4 factorise_4.c -lrt -pthread
  
  Kevan Buckley, University of Wolverhampton, 2018
*****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include <math.h>
#include <malloc.h>

#define goal 2984679959
#define n_threads 8

typedef struct arguments_t {
  int start;
  int stride;
} arguments_t;

void factorise() {
  int i;
  pthread_t *t = malloc(sizeof(pthread_t) * n_threads);
  arguments_t *a = malloc(sizeof(arguments_t) * n_threads);

  for(i=0;i<n_threads;i++){
    a[i].start = i;
    a[i].stride = n_threads;
  }

  void *find_factors();
  
  for(i=0;i<n_threads;i++){
    pthread_create(&t[i], NULL, find_factors, &a[i]);
  }

  for(i=0;i<n_threads;i++){
    pthread_join(t[i], NULL);
  }

  free(t);
  free(a);
}


void *find_factors(arguments_t *args){
  int a, b, c, d;
  for(a=args->start;a<1000;a+=args->stride){
    printf("thread with id %p is exploring %d\n", (void *) pthread_self(), a);
    for(b=0;b<1000;b++){
      for(c=0;c<1000;c++){
        for(d=0;d<1000;d++){
          if(a*b*c*d == goal){
             printf("solution is %d, %d, %d, %d\n", a, b, c, d);
          }
        } 
      }
    }
  }
}

int time_difference(struct timespec *start, struct timespec *finish, 
                              long long int *difference) {
  long long int ds =  finish->tv_sec - start->tv_sec; 
  long long int dn =  finish->tv_nsec - start->tv_nsec; 

  if(dn < 0 ) {
    ds--;
    dn += 1000000000; 
  } 
  *difference = ds * 1000000000 + dn;
  return !(*difference > 0);
}

int main() {
  struct timespec start, finish;   
  long long int time_elapsed;

  clock_gettime(CLOCK_MONOTONIC, &start);
 
  factorise();

  clock_gettime(CLOCK_MONOTONIC, &finish);
  time_difference(&start, &finish, &time_elapsed);
  printf("Time elapsed was %lldns or %0.9lfs\n", time_elapsed, 
         (time_elapsed/1.0e9)); 

  return 0;
}
