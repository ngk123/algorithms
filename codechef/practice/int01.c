#include<stdio.h>
#include<stdlib.h>

int main()
{
  int T,N;
  scanf("%d",&T);

  while(T--)
    {
      scanf("%d",&N);
      printa(N);
      printf("\n");
    }
  return 0;
}

int printa(int n)
{
  if(n==1){printf("A");return 0;}

  //  if(n==2){printf("(A)");return 0;}

  if(n%2==0)
    {
      printf("(");
      printa(n/2);
      printf(")");
      return 0;
    }
  if(n%2==1)
    {
      printf("(");
      printa(n/2);
      printf(")A");
      return 0;
    }
 
}
