#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T,n,ans,temp,temp2;
	scanf("%d",&T);	
	while(T--)
	{
		scanf("%d",&n);
		if(n==0)printf("1\n");
		else if(n==1)printf("2\n");
		else if(n==2)printf("3\n");
		else
		{
			ans=0;
			if(n%2==1)
			{
				temp=((n-1)/2)+1;
				ans+=1<<temp;
				temp2=1<<(n/2);
				temp2-=1;
				temp2<<=1;
				ans+=temp2;		
			
			}
			
			else
			{
				temp=((n-2)/2)+1;
				ans+=1<<temp;
				temp2=1<<((n-1)/2);
				temp2-=1;
				temp2<<=1;
				temp2+=1;
				ans+=temp2;
			}		
			printf("%d\n",ans);
		
		
		}
	
	}	


	return 0;
}
