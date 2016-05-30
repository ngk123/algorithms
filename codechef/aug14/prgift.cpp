#include<cstdio>
#include<cstdlib>

int main()
{
	int T,n,k,a,count,i;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&k);
		count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
			if((a&1)==0) count++;	
		}	
		
		//printf("%d\n",count);
		if((count==n && k==0))
		{
			printf("NO\n");
		}
		else if(count>=k)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");	
		}
	
	}

	return 0;
}
