/****************************************************************************
  This version uses a combination of iteration and addition. This amplifies
  the unpredictability of the results.

  Compile with:

    cc -o multiply4 multiply4.c -pthread
  
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
  arguments_t a, b, c;
  pthread_t t1, t2, t3;

  a.x = 77777;
  a.y = 5;

  b.x = 666;
  b.y = 4;

  c.x = 99999;
  c.y = 9;

  void *multiply();
   
  pthread_create(&t1, NULL, multiply, &a);
  pthread_create(&t2, NULL, multiply, &b);
  pthread_create(&t3, NULL, multiply, &c);

  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  pthread_join(t3, NULL);

  printf("%d * %d = %d\n", a.x, a.y, a.z);
  printf("%d * %d = %d\n", b.x, b.y, b.z);
  printf("%d * %d = %d\n", c.x, c.y, c.z);
  
  return 0;
}

void *multiply(arguments_t *p) {
  int i;
  pid_t t_id;
  int result = 0;
  t_id = syscall(SYS_gettid);
  
  printf("thread %u received %d and %d\n", t_id, p->x, p->y);

  for(i =0;i<p->x;i++) {
    result += p->y;
  }
  
  printf("thread %u calculated %d\n", t_id, result);  
  p->z = result; 
}
