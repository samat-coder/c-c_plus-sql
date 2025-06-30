#include <stdio.h>
int main()
{

  int user, i;
  double sum = 0.0;

  printf("enter the number:");
  scanf("%d", &user);

  for (i = 1; i <= user; i++)
  {
    if (i == 1)
    {
      printf("%d/%d", i, i + 1);
    }
    else if (i % 2 == 1)
    {
      printf(" + %d/%d", i, i + 1);
      sum += (double)i / (i + 1);
    }
    else
    {
      printf(" - %d/%d", i, i + 1);
      sum -= (double)i / (i + 1);
    }
  }

  printf("\n\t total is:%lf", sum);
}
