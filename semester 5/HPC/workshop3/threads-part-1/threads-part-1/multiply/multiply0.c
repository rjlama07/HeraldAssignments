/****************************************************************************
  This program demonstrates how to define a thread function and run it on
  a single thread. All the thread function does is print out the unique
  thread id. After the thread is launched the join function is used to wait
  for it to finish. If this is not included the program may finish before 
  the thread gets to print its message.

  Compile with:

    cc -o multiply0 multiply0.c -pthread
  
  Dr Kevan Buckley, University of Wolverhampton, 2018
*****************************************************************************/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

int main() {
  pthread_t t1;

  void *thread_function();
   
  pthread_create(&t1, NULL, thread_function, NULL);
  pthread_join(t1, NULL);
  
  return 0;
}

void *thread_function() {
  pid_t t_id = syscall(SYS_gettid);
  printf("thread id is %u\n", t_id);
}

