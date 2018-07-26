#include <stdio.h>

// *str here is a pointer to a string

void sp_to_dash(const char *str);

int main(void)
{
  sp_to_dash("this is a test");

  // volatile, tells a compiler that the value may be changed in ways not explicitly specified by a programming
  const volatile char *port = (const colatile char *) 0x30;

  return 0;
}

void sp_to_dash(const char *str)
{
  while(*str)
  {
    if (*str== ' ') printf("%c", '-');
    else printf("%c", *str);
    str++;
  }
}
