#include <stdio.h>

void inp_handler(int i);

int main(void)
{
  int i;
  i = 5;

  inp_handler(i);
}

void inp_handler(int i)
{
  int flag;
  flag = -1;

  switch(i)
  {
    case 1: /* These cases have common */
    case 2: /* statement sequences */
    case 3:
      flag = 0;
      break;
    case 4:
      flag = 1;
    case 5:
      printf("Error: %d", flag);
      break;
    default:
      printf("Default case reached\n");
  }
}
