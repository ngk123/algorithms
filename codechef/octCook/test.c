#include<stdio.h>
#include<stdlib.h>

int main()
{
  int  T,i,j,n,time[120],max,point,c,p,t,N,W;


  scanf("%d",&T);

  while(T--)
    {
      int time[210]={0};
      scanf("%d%d",&N,&W);
      // printf("W=%d\n",W);
      for(i=0;i<N;i++)
	{
	  scanf("%d%d%d",&c,&p,&t);
	  point=c*p;
	 
	  for(j=100;j>=1;j--)
	    {
	      if(time[j]!=0 && time[j+t]<time[j]+point)
		{
		  time[j+t]=time[j]+point;
		}
	    }
	  if(time[t]==0){time[t]=point;}
	  if(time[t]<point)time[t]=point;
 
	}
      max=time[1];
      // printf("max[1]=%d\n",time[1]);
      for(i=2;i<=W;i++)
	{
	  // printf("time[%d]=%d\n",i,time[i]);
	  if(max<time[i])max=time[i];

	}
      printf("%d\n",max);
    }


  return 0;
}

