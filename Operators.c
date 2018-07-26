// Operators:
// - (subtraction or unary minus)
// + (addition)
// * (multiplication)
// / (division)
// % (modulus)
// -- (decrement)
// ++ (increment)

// Arithmetic operator precedence:
// Highest -> ++ --
//           -(unarmy minus)
//           * / %
// Lowest    + -

#include <stdio.h>

int main(void)
{
  int x, y;

  x = 5;
  y = 2;

  printf("%d ", x/y); /* will display 2 */
  printf("%d ", x%y); /* will display 1, the remainder of the integer divsion */

  x = 1;
  y = 2;

  printf(" % d %d", x/y, x%y); /* will display 0 1 */


}
