#include<stdio.h>
#include<stdlib.h>

int pr(int ans)
{
  int prime[]={2,3,5,7,11,13,17,19,23,29,31,37};
  int i,cnt=0;
  for(i=0;i<12;i++)
    {

      if(ans>=prime[i])cnt++;
      else break;
    }
  return cnt;


}

int main()
{
  int T,N,p,ans;

  scanf("%d",&T);


  while(T--)
    {
      scanf("%d",&N);

      if(N==1 || N==2 || N==3)printf("0\n");
      else if(N==4)printf("1\n");
      else 
	{
	  ans=1;
	  ans+=(N-3);
	  p=pr(ans);
	  printf("%d\n",p);
	}
    }




  return 0;
}
