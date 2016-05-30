#include<bits/stdc++.h>

using namespace std;

int prime[10000003];

int main()
{
	int i,temp,t;
	for(i=0;i<10000003;i++)
	{
		prime[i]=0;	
		state[i]=i;	
	}
	temp=10000003;
	for(i=2;i<=temp;i++)
	{
		if(prime[i]==0)
		{
			state[i]=1;
			prime[i]=1;
			for(j=2*i;j<10000003;j+=i)
			{
				t=j;
				while(state[j]%i==0)
				{
					prime[j]+=1;
					state[j]=state[j]/i;
				}
			}
		}
	}
	

	return 0;
}
