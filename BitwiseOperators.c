/* A bit shift example. */

// Bitwise Operators:
// & (AND)
// | (OR)
// ^ (Exclusive OR (XOR))
// ~ One's Complement (NOT)
// >> (shift right)
// << (shift left)

#include <stdio.h>

int main(void)
{
  unsigned int i;
  int j;

  i = 1;

  /* left shifts */
  for(j=0; j<4; j++)
  {
    i = i << 1; /* left shift i by 1, which is the same as multiply by 2 */
    printf("Left shift %d: %d\n", j, i);
  }

  /* right shofts */
  for(j=0; j<4; j++)
  {
    i = i >> 1; /* right shift i by 1, which is the same as division by 2 */
    printf("Right shift %d: %d\n", j, i);
  }

  return 0;
}
