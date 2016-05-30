#include<stdio.h>
#include<stdlib.h>

#define max 10000000000000000

typedef long long int lli;
lli countB(lli target);
lli  arr[200];
int idx;



int main()
{
  int i,T,a,b,c;
  lli ans,target;
  arr[0]=1;
  for(i=1; ;i++)
    {
      arr[i]=arr[i-1]<<3;
      printf("%lli\n",arr[i]);
      if(arr[i]>max)break;
    } 
  idx=i;

  scanf("%d",&T);

  while(T--)
    {
      scanf("%d%d%d",&a,&b,&c);
      target=(lli)a*b*c;
      ans=countB(target);
      printf("%lld\n",ans);
    }

  return 0;
}


lli countB(lli target)
{
  lli temp,remain;
  int i;
  if(target==0)return 0;
  for(i=0;i<=idx;i++)
    {
      if(arr[i]>target)break;
    }

  temp=target/arr[i-1];
  remain=target-(temp*arr[i-1]);
  return temp+countB(remain);
}
