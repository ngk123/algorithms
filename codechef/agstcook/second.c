#include<stdio.h>
#include<stdlib.h>

int main()
{
  int N,Q,i,a[100000],count,L,R,K,j;

  scanf("%d%d",&N,&Q);
  for(i=0;i<N;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=0;i<Q;i++)
    {
      scanf("%d%d%d",&L,&R,&K);
      count=0;
      for(j=L-1;j<R;j++)
	{
	  if(a[j]%K==0)count++;

	}
      printf("%d\n",count);
    }
  



  return 0;

}
