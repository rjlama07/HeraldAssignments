/****************************************************************************
  This version uses 16 threads to solve the factorisation problem. This is 
  easily changed to a different number of threads by just changing the 
  n_threads variable. To enable this flexibility dynamic memory allocation is 
  required to store the parameters and thread references.

  Note this version still explores the whole search space regardless of 
  whether solutions have been found or not. This enables it to be compared to
  the other solutions with different threading architectures without the need
  for trials with a large number of different problems - i.e. the comparison
  is between worst case scenarios.

  Compile with:

    cc -o factorise_3_n factorise_3_n.c -lrt -pthread
  
  Dr Kevan Buckley, University of Wolverhampton, 2018
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

#define goal 98931313
#define n_threads 16

typedef struct arguments {
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
  int a, b, c;
  for(a=args->start;a<1000;a+=args->stride){
    for(b=0;b<1000;b++){
      for(c=0;c<1000;c++){
        if(a*b*c == goal){
           printf("solution is %d, %d, %d\n", a, b, c);
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
