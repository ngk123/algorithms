#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int T , L, R , a[100001],sum[100001],tempS,j,i,count,ans;
  a[0]=1;
  a[1]=3;
  sum[0]=1;
  sum[1]=4;
  j=1;
  tempS=0;
  count=2;
  for(i=2;i<=100001;i++)
    {
      a[i]=(count*count)+tempS+j;
      sum[i]=sum[i-1]+a[i];
      //printf("%lld\t",sum[i]);
     
	if(j==count){j=1;tempS=0;count++;}
      else
	{
	  tempS+=j;
	  j++;
	  
	}

    }

  scanf("%lld",&T);

  while(T--)
    {
      scanf("%lld%lld",&L,&R);
      
      if(L!=1)
	{
	  ans=sum[R-1]-sum[L-2];
	}
      
      else
	{
	  
	  ans=sum[R-1];
	}
      printf("%lld\n",ans);
      
      
    }
  
  return 0;
  
}
