#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int bSearch(long long int fib[],long long int n,long long int l,long long int r)
{
  long long int mid;
  mid=(l+r)/2;

  while(l <= r)
    {
      if(fib[mid] < n)l=mid+1;
      else if(fib[mid]==n)return 1;
      else r=mid-1;

      mid=(l+r)/2;
    }


  if(l>r)
    return 0;

}

int main()
{
  long long int T,n,t1,t2,len,i;
  long long int rt1,rt2,fib[100];
  int check;
  fib[0]=0;
  fib[1]=1;
  for(i=2; ;i++)
    {
      fib[i]=fib[i-1]+fib[i-2];
      if(fib[i]>10000000007)break;
    }
  len=i;
  scanf("%lld",&T);
  while(T--)
    {
      scanf("%lld",&n);
      check= bSearch(fib,n,0,len);
      if(check==1)printf("IsFibo\n");
      else printf("IsNotFibo\n");
    }

  return 0;
}
