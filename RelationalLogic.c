// Relational Operators
// > (Greater Than)
// >= (Greater than or equal)
// < (Less than)
// <= (Less than or equal)
// ++ (Equal)
// != (Not equal)
// Logical Operators
// && (AND)
// || (OR)
// ! (NOT)

// Precedence:
// Highest -> !
//            > >= < <+
//            == !=
//            &&
// Lowest ->  ||

#include <stdio.h>

int xor(int a, int b);

int main(void)
{
  printf("%d", xor(1, 0));
  printf("%d", xor(1, 1));
  printf("%d", xor(0, 1));
  printf("%d", xor(0, 0));

  return 0;
}

/* Perform a logical XOR operation using the two arguments. */
int xor(int a, int b)
{
  return (a || b) && !(a && b);
}
