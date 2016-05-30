#include<cstdio>
#include<cstdlib>
#include<iostream>

int main()
{
	int T,N,ans[1000001],i;
	long long int temp,temp1,temp2;
	
	ans[1]=1;
	ans[2]=2;
	for(i=3;i<1000001;i++)
	{
		temp1=ans[i-1];
		temp2=ans[i-2];
		temp=temp1+temp2;	
		temp=temp%1000000007;
		ans[i]=temp;
	}
	
	scanf("%d",&T);
	
	while(T--)
	{
		scanf("%d",&N);
		printf("%d\n",ans[N]);	
	}
	
	
	
	return 0;
}
