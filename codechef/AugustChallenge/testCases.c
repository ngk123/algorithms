#include<stdio.h>
#include<stdlib.h>
#define mod 1000000000
int main()
{
  int T,i,d,N,m,upper;
  T=200;
  printf("%d\n",T);
  for(i=0;i<T;i++)
    {
      upper=rand()%mod+1;
      d=rand()%mod;
      N=rand()%40+1;
      while(1)
	{      m=rand()%40;
	  if(m<N)break;}
      printf("%d\t%d\t%d\t%d\n",upper,d,m,N);
    }
  return 0;
}

