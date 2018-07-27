// Expressions Order of Evaluation:
// Highest  {} [] -> .
//          ! ~ ++ -- - (type) * & sizeof
//          * / %
//          + -
//          << >>
//          < <= > >=
//          == !=
//          &
//          ^
//          |
//          &&
//          ||
//          ?:
//          = += -= *= /= etc.
// Lowest   ,

#include <stdio.h>

char s[80];

int main(void)
{
  s[3] = 'X';
  printf("%c", s[3]);

  return 0;
}
