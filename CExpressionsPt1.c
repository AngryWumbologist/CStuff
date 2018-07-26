// char (8 bytes) -127 to 127
// unsigned char (8 bytes) 0 to 255
// signed char (8 bytes) -127 to 127
// int (16 to 32 bytes) -32767 to 32767
// unsigned int (16 to 32 bytes) 0 to 65535
// signed int (16 to 32 bytes) Same as int
// short int (16 bytes) -32767 to 32767
// unsigned short int (16 bytes) 0 ti 65535
// signed short int (16 bytes) same as short int
// long int (32 byres) -2147483647 to 2147483647
// long long int (64 bytes) -(2^63 -1) to 2^63 - 1
// signed long int (32 bytes) Same as long int
// unsinged long int (32 bytes) 0 to 4294967295
// unsigned long long int (64 bytes) 2^64 -1
// float (32 bytes)
// double (64 bytes)
// long double (80 bytes)

// local variables are limited to their own functions
#include <stdio.h>

void f(void);
int is_in(char *s, char c);

int main(void)
{
  int x;
  x = 10;

  if(x == 10)
  {
    int x; /*this x hides the outer x*/

    x = 99;
    printf("Inner x: %d \n", x);

  }
  printf("Outer x: %d\n", x);

  // Running the f functions
  int i;

  for(i=0;i<10;i++) f();

  return 0;
}
// An example of using formal parameters for functions
int is_in(char *s, char c)
{
  while(*s)
    if(*s==c) return 1;
    else s++;
}

void f(void)
{
  int j = 10;

  printf("%d ", j);

  j++; /* this line has no lasting effect*/
}
