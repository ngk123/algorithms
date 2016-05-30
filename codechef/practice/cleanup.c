#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T,n,m,i,count,idx;
	
	scanf("%d",&T);
	while(T--)
	{
		int job[1001]={0};
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&idx);
			job[idx-1]=1;		
		}	
		count=0;
		for(i=0;i<n;i++)
		{
			if(job[i]==0 && (count%2)==0)
			{
				job[i]=1;
				printf("%d ",i+1);
				count++;
			}
			else if(job[i]==0) count++;
		
		}
		printf("\n");
		for(i=0;i<n;i++)
		{
			if(job[i]==0)
			printf("%d ",i+1);			
		}
		printf("\n");
	}
}
