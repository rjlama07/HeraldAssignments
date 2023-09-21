/****************************************************************************
  This program finds solutions to a three parameter factorisation problem.
  A large integer, the goal, is specified and the task is to find three
  other integers (the factors) that when multiplied together equal the goal.
  e.g. the factors of 98931313 are 221, 449, 997.

  Compile with:

    cc -o factorise_3_0_a factorise_3_0_a.c 

  Things to note:
   - This program demonstrates the simplest solution, which does not do any 
     performance measurements and does not stop after a solution has been 
     found.
  
  Dr Kevan Buckley, University of Wolverhampton, 2018
*****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <string.h>
#include <math.h>

#define goal 98931313

void factorise() {
  int a, b, c;
  for(a=0;a<1000;a++) {
    for(b=0;b<1000;b++) {
      for(c=0;c<1000;c++) {
        if(a*b*c == goal) {
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
