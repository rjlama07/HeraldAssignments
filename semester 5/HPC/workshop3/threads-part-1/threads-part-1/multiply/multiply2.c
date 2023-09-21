/****************************************************************************
  This program demonstrates how to use a struct to pass arguments to and 
  return results from a thread function. The variable a stores belongs to the
  arguments_t struct type. The integers 7 and 5 are stored in x the and y 
  elements of a. The thread function multiplies x by y and stores the result
  in the z element. After a thread is launched and completes it's operations
  the z element is printed out in the main function to demonstrate that the
  multiplication has been completed the multiplication and stored the results
  correctly. By using structs to communicate with a function it is possible
  for a function to yield multiple results.

  Compile with:

    cc -o multiply2 multiply2.c -pthread
  
  Dr Kevan Buckley, University of Wolverhampton, 2018
*****************************************************************************/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

typedef struct arguments_t {
  int x;
  int y;
  int z;
} arguments_t;

int main() {
  arguments_t a;
  pthread_t t1;

  a.x = 7;
  a.y = 5;

  void *multiply();
   
  pthread_create(&t1, NULL, multiply, &a);
  pthread_join(t1, NULL);

  printf("%d * %d = %d\n", a.x, a.y, a.z);
  
  return 0;
}

void *multiply(arguments_t *p) {
  pid_t t_id;
  int result;
  t_id = syscall(SYS_gettid);
  printf("thread %u received %d and %d\n", t_id, p->x, p->y);
  result = p->x * p->y;
  printf("thread %u calculated %d\n", t_id, result);  
  p->z = result; 
}

