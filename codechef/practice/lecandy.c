#include<stdio.h>

int main()
{
  int T,N,C,ak,i,j,temp;

  scanf("%d",&T);

  for(i=0;i<T;i++)
    {
      scanf("%d%d",&N,&C);
      temp=0;
      for(j=0;j<N;j++)
	{
	  scanf("%d",&ak);
	  temp+=ak;
	}
      if(temp<=C)
	{
	  printf("Yes\n");
	}
      else
	{
	  printf("No\n");
	}
    }
}

