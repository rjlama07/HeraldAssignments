/****************************************************************************
  This program finds groups of three numbers that when multiplied together
  equal 98931313.

  This version uses a struct to pass parameters to the thread function.

  Compile with:

    cc -o factorise_3_1_d factorise_3_1_d.c -lrt -pthread
  
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

#define goal 98931313

typedef struct arguments_t {
  int start;
  int block_size;
} arguments_t;

void factorise() {
  pthread_t t1;
  arguments_t t1_arguments;
  t1_arguments.start = 0;
  t1_arguments.block_size = 1000;

  void *find_factors();
  
  pthread_create(&t1, NULL, find_factors, &t1_arguments);
  pthread_join(t1, NULL);
}

void *find_factors(arguments_t *args){
  int a, b, c;
  for(a=args->start;a<args->block_size;a++){
    for(b=0;b<1000;b++){
      for(c=0;c<1000;c++){
        if(a*b*c == goal){
           printf("solution is %d, %d, %d\n", a, b, c);
//           return NULL; // remove comment for faster solution at the expense of uncomparable solutions
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
