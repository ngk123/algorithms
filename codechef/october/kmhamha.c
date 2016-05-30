#include<stdio.h>
#include<stdlib.h>





typedef struct pair{
  int x;
  int y;
}pair;


int main()
{
  int T,N,x,y;
  pair point[1000];
  scanf("%d",&T);
  while(T--)
    {
      scanf("%d",&N);
      for(i=0;i<N;i++)
	{
	  scanf("%d%d",&point[i].x,&point[i].y);
	  
	}
    }
  return 0;
}
