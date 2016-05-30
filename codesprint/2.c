#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007
long long int fact(int n )
{
  long long int ans,i;
  
  ans=1;

  for(i=2;i<=n;i++)
    {
      ans=ans*i;
      ans=ans%mod;
    }

  return ans;

}


int multiplicativeInv(long long int a, long long int m)
{
  int x,y,u,v,e,f;
  x=0;
  y=1;
  u=1;
  v=0;
  e=m;
  f=a;
  int c,d,q,r;
  
  while(f!=1)
    {
      q=e/f;
      r=e%f;
      c=x-q*u;
      d=y-q*v;
      x=u;
      y=v;
      u=c;
      v=d;
      e=f;
      f=r;
    }
  
  u=(u+m)%m;
  return u;
}


int main()
{
  long long int T,m,n,ans,den1,den2,num;
long long  int mod2=1000000007;
  int inv;
  scanf("%lld",&T);
  while(T--)
    {
      scanf("%lld%lld",&m,&n);
      if(m==1 && n==1)ans=1;
      else
	{
	  num=fact(m+n-2);
	  den1=fact(m-1);
	  den2=fact(n-1);
	  inv=multiplicativeInv(den1,mod2);
	  //  printf("inv 1: %d\n",inv);

	  ans=(inv*num)%mod;
	  inv=multiplicativeInv(den2,mod2);

	  //  printf("inv 2: %d\n",inv);
	  ans=(inv*ans)%mod;
	}
	
      printf("%lld\n",ans);
    }

  return 0;
  
}
