/****************************************************************************
  This program finds groups of three numbers that when multiplied together
  equal 98931313.

  This version uses POSIX threads. However, it only uses one thread. By
  comparing the performance of this version with the original serial version
  we can determine if there is an overhead when using threads. 

  Things to note with this version:
    - The arguments_t type is defined to specify the partition of the problem
      a thread will search. Its components are the integer to start the outer 
      loop of the search from and the number of iterations that loop needs to 
      perform.
    - pthread_t variables store references to threads.
    - pthread_create creates a thread and notifies the scheduler that it is 
      ready to run.
    - pthread_join blocks the current thread until the specified thread 
      completes.

  Compile with:

    cc -o factorise_3_1_a factorise_3_1_a.c -lrt -pthread
  
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

void factorise() {
  pthread_t t1;

  void *find_factors();
  
  pthread_create(&t1, NULL, find_factors, NULL);
  pthread_join(t1, NULL);
}

void *find_factors() {
  int a, b, c;
  for(a=0;a<1000;a++){
    for(b=0;b<1000;b++){
      for(c=0;c<1000;c++){
        if(a*b*c == goal){
           printf("solution is %d, %d, %d\n", a, b, c);
        }
      }
    }
  }
}

int main() {

  factorise();

  return 0;
}
