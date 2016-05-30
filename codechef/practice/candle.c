#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,T,a[11],j,k,min,minIdx,ans;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int b[11]={0};					
		min=11;
		for(j=0;j<10;j++)
		{
			scanf("%d",&a[j]);
			if(a[j]<min)
			{min=a[j];minIdx=j;}
		}
		if( minIdx==0)
		  {
		    for(j=1;j<10;j++)
		      {
			if(a[j]==min){minIdx=j; break;}
		      }
		    
		  }
		ans=0;
		if(minIdx==0)
		{	
		  /* printf("1");
			for(k=0;k<=min;k++)
			{
				printf("0");
				}*/
		  ans=1;
		  for(k=0;k<=min;k++)
		    {
		      ans=ans*10;
		    }
		  printf("%d",ans);
		}
		else
		{
		       ans=minIdx;
			for(k=0;k<min;k++)
			{
			  ans=ans*10+minIdx;
			
			}
			printf("%d",ans);
		
		}
		printf("\n");
	
	
	}

	return 0;
}
