/* Magic number if-else-if */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int magic; /* magic number */
  int guess; /* user's guess */

  magic = rand();

  printf("Guess the magic number: ");
  scanf("%d", &guess);

  if(guess == magic)
  {
    printf("** Right **");
    printf(" %d is the magic number", magic);
  }
  else if(guess > magic)
    printf("Wrong, too high\n");
  else printf("Wrong, too low\n");

  return 0;
}
