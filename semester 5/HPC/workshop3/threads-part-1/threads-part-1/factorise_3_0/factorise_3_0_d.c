/****************************************************************************
  This program finds solutions to a three parameter factorisation problem.
  A large integer, the goal, is specified and the task is to find three
  other integers (the factors) that when multiplied together equal the goal.
  e.g. the factors of 98931313 are 221, 449, 997.

  Compile with:

    cc -o factorise_3_0_d factorise_3_0_c.d -lrt 

  Things to note:
   - This version passes arguments to the factorise function using a struct.
  
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


void factorise(arguments_t *args) {
  int a, b, c;
  for(a=args->start;a<args->block_size;a++) {
    for(b=0;b<1000;b++){
      for(c=0;c<1000;c++){
        if(a*b*c == goal){
          printf("solution is %d, %d, %d\n", a, b, c);
//          return; // remove comment for faster solution at the expense of uncomparable solutions
        }
      }
    }
  }
}

// Calculate the difference between two times. Returns zero on
// success and the time difference through an argument. It will 
// be unsuccessful if the start time is after the end time.

int time_difference(struct timespec *start, 
                    struct timespec *finish, 
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
  arguments_t a;

  clock_gettime(CLOCK_MONOTONIC, &start);
 
  a.start = 0;
  a.block_size = 1000;
  
  factorise(&a);

  clock_gettime(CLOCK_MONOTONIC, &finish);
  time_difference(&start, &finish, &time_elapsed);
  printf("Time elapsed was %lldns or %0.9lfs\n", time_elapsed,
                                         (time_elapsed/1.0e9)); 
  return 0;
}
