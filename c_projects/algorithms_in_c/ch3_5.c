#define N 10000
#include <stdio.h>
int main()
{
  int i, j, a[N];
  for (i = 2; i < N; i++)
  {
    a[i] = 1;
  }

  for (i = 2; i < N; i++)
  {
    if (a[i])
    {
      for (j = i; j < N/i; j++)
      {
        a[i*j] = 0;
      }
    }
  }

  for (i = 2; i < N; i++)
  {
    if (a[i])
    {
       printf("%4d ", i);
    }
  }

  printf("\n");
  return 0;
}
