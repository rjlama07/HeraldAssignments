/****************************************************************************
  This program demonstrates that threads have unique ids by observing the
  thread ids being printed out.
  
  Compile with:

    cc -o multiply1 multiply1.c -pthread
  
  Dr Kevan Buckley, University of Wolverhampton, 2018
*****************************************************************************/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/syscall.h>

int main() {
  pthread_t t1, t2, t3;

  void *thread_function();
   
  pthread_create(&t1, NULL, thread_function, NULL);
  pthread_create(&t2, NULL, thread_function, NULL);
  pthread_create(&t3, NULL, thread_function, NULL);
  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  pthread_join(t3, NULL);
  
  return 0;
}

void *thread_function() {
  pid_t t_id = syscall(SYS_gettid);
  printf("thread id is %u\n", t_id);
}

