#include<cstdio>
#include<cstdlib>
#include<iostream>

int main()
{
	int T,N;
	
	scanf("%d",&T);
	
	while(T--)
	{
	
		scanf("%d",&N);		
		if(N%2==0)
		{
			printf("ALICE\n");
		}
		else
		{
			printf("BOB\n");		
		}
	
	}
return 0;

}
