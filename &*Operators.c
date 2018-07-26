// & (unary operator, returns memory address)
// * (pointer operator, returns value at said address)

#include <stdio.h>

int main(void)
{
  int target, source;
  int *m;

  source = 10;
  m = &source;
  target = *m;

  printf("%d | %ls", target,&source);

  return 0;
}
