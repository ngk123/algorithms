#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define mod 1000000007

long long int rangeSum (long long int L ,long long int R);

int main()
{

  long long int T,L,t,R,temp,dig1,dig2,temp1,temp2,r1,l2,first,second,di,tempMid,mid,l,r;
  scanf("%lld",&T);
  while(T--)
    {
      scanf("%lld%lld",&L,&R);
      temp1=L;
      temp2=R;
      dig1=0;
      dig2=0;
      while(temp1>0)
	{
	  temp1=temp1/10;
	  dig1++;
	}

      while(temp2>0)
	{
	  temp2=temp2/10;
	  dig2++;
	}
      //printf("dig1:%lld:::dig2:%lld",dig1,dig2);
      if(dig1==dig2)
	{
	  temp=(L+R)%mod;
	  temp=((temp*(R-L+1))/2)%mod;
	  //  temp=(temp/2)%mod;
	  temp=(temp*dig1)%mod;
	  printf("%lld\n",temp);
	}

      else if(dig2==dig1+1)
	{
	  t=pow(10,dig1);
	  r1=t-1;
	  l2=t;
	  first=rangeSum(L,r1);
	  first=(first*dig1)%mod;
	  second=rangeSum(l2,R);
	  second=(second*dig2)%mod;
	  temp=(first+second)%mod;
	  printf("%lld\n",temp);
	}

      else
	{
	  t=pow(10,dig1);
	  r1=t-1;
	  first=rangeSum(L,r1);
	  first=(first*dig1)%mod;
	  di=dig1;
	  tempMid=0;
	  while(1)
	    {
	      l=pow(10,di);
	      r=pow(10,di+1)-1;
	      mid=rangeSum(l,r);
	      mid=(mid*(di+1))%mod;
	      tempMid=(tempMid+mid)%mod;
	      if(di+2==dig2)break;
	      di++;
	    }
	  //	  printf("dig2:%lld\n",dig2);
  	  l2=pow(10,dig2-1);
	  second=rangeSum(l2,R);
	  second=(second*dig2)%mod;
	  temp=(first+second)%mod;
	  temp=(temp+tempMid)%mod;
	  printf("%lld\n",temp);
	}


    }
  return 0;
}



long long int rangeSum (long long int L ,long long int R)
{
  long long int temp;
  temp=(L+R)%mod;
  temp=((temp*(R-L+1))/2)%mod;
  // temp=(temp/2)%mod;
  return temp;
  //	  printf("%lld\n",temp);
}
