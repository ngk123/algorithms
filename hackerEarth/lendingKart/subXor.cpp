#include<cstdlib>
#include<cstdio>
#include<iostream>

int main()
{
	int T,N,a,i;
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&a);		
		}
		if(N==1)
		{
			printf("%d\n",a);		
		}
		else
		{
			printf("0\n");
		}
	
	}
	
	return 0;
}
