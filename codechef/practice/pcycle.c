#include<stdio.h>
//#include<stdlib.h>

int main()
{
  int N,arr[1001][1003],i,next,count,a[1001],ans,j;

  scanf("%d",&N);

  for(i=1;i<=N;i++)
    {
      scanf("%d",&a[i]);
    }
  int flag[1002]={0};
  for(i=1;i<=N;i++)
    {
      if(flag[i]==0)
	{
      arr[i][0]=0;
      flag[i]=-1;
      arr[i][1]=i;
      next=i;
      count=2;
      while(1)
	{
	  arr[i][count]=a[next];
           next=a[next];
           flag[next]=-1;
	   count++;
	   if(next==i){arr[i][0]=1;arr[i][count]=-1;ans++;break;}
	   if(count==N+1)break;
	}
	}

    }
  printf("%d\n",ans);

  for(i=1;i<=N;i++)
    {
      if(arr[i][0]==1)
	{
	  for(j=1; ;j++)
	    {
	      if(arr[i][j]==-1)break;
              printf("%d ",arr[i][j]);
	    }
          printf("\n");
	}
      
    }

  return 0;
}
