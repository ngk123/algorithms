#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int T,N,i,ans,temp,tempans,count;
  long long  int check[33]={0};
  scanf("%lld",&T);
  ans=0;
  while(T--)
    {
      scanf("%lld",&N);
      count=0;
      while(1)
	{
	  if(N<=0)break;
	  if(N&1)count++;
	  N=N>>1;
	}
      check[count]+=1;
    }

  for(i=0;i<=33;i++)
    {
      temp=check[i];
      if(temp==3)ans+=1;
      else if(temp>3)
	{
	  tempans=(temp*(temp-1))/2;
	  tempans=(tempans*(temp-2))/3;
	  ans+=tempans;
	}

    }
  printf("%lld\n",ans);

  return 0;
}
