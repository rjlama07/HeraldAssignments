#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/******************************************************************************
  Demonstrates how to crack an encrypted password using a simple
  "brute force" algorithm. Works on passwords that consist only of 3 lowercase
  letters, hence the version name Lc3. Before you experiment with this program
  you should explore CommandLine.c to learn about problems with "dollars" and
  use EncryptSHA512.c to encrypt some passwords for testing.

  Compile with:
    cc -o CrackLc3 CrackLc3.c -lcrypt
  Use the "\" before "$" in your encrypted password in the command line when you run the program
  If you want to analyse the output then use the redirection operator to send
  output to a file that you can view using an editor or the less utility, for example (the plaintext for below should be "ali":
    ./CrackLc3 \$6\$AS\$8s/dt5uCaGNOKQy54QD1hV6cCFC8DNLugBNUivlWzTr84LiZUL.7c2.JCmSkFlHwaBqWeCFFXy/v9XoEw5KgW/ > output.txt

  Dr Kevan Buckley, University of Wolverhampton, 2017, 2018, Modified by Dr. Ali Safaa 2019
******************************************************************************/

int count = 0; // A counter used to track the number of combinations explored so far

/**
 Required by lack of standard function in C.
*/

void substr(char *dest, char *src, int start, int length)
{
  memcpy(dest, src + start, length);
  *(dest + length) = '\0';
}

/**
 This function can crack a three letter lowercase password. All combinations
 that are tried are displayed and when the password is found, #, is put at the
 start of the line. Note that one of the most time consuming operations that
 it performs is the output of intermediate results, so performance experiments
 for this kind of  program should not include this.
*/

void crack(char *salt_and_encrypted)
{
  int x, y, z;     // Loop counters
  char salt[7];    // String used in hashing the password. Need space for \0 // incase you have modified the salt value, then should modifiy the number accordingly
  char plain[4];   // The combination of letters currently being checked // Please modifiy the number when you enlarge the encrypted password.
  plain[3] = '\0'; // Put end of string marker on password
  char *enc;       // Pointer to the encrypted password

  substr(salt, salt_and_encrypted, 0, 6);

  for (x = 'a'; x <= 'z'; x++)
  {
    plain[0] = x;
    for (y = 'a'; y <= 'z'; y++)
    {
      plain[1] = y;
      for (z = 'a'; z <= 'z'; z++)
      {
        plain[2] = z;
        enc = (char *)crypt(plain, salt);
        count++;
        if (strcmp(salt_and_encrypted, enc) == 0)
        {
          printf("#%-8d%s %s\n", count, plain, enc);
        } // else {						//*** Uncomment 62-64 lines if you want to print all the explored possibilites **//
          // printf(" %-8d%s %s\n", count, plain, enc);
        //  }
      }
    }
  }
}

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    printf("This program requires you to provide an encrypted password\n");
    return 1;
  }

  if (strlen(argv[1]) != 92)
  { // Modify the number incase you enlarge the salted value (for try only! no need to change it for your task) //
    printf("Encrypted passwords should be 92 characters long including salt\n");
    return 1;
  }

  crack(argv[1]);
  printf("%d solutions explored\n", count);

  return 0;
}
