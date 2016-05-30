#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

typedef unsigned long long ull;
bool isPrime[1001]={0};

int ans[1001];
int idx=0;
void sieve(int n)
{
	int i,temp,j;
	isPrime[0]=isPrime[1]=1;
	isPrime[2]=isPrime[3]=0;
	temp=sqrt(n);
	for(i=4;i<=n;i+=2)
	{
		isPrime[i]=1;	
	}
	
	for(i=3;i<=temp;i+=2)
	{
		if(isPrime[i]==0)
		{
			for(j=i*i;j<=n;j+=2*i)
			{
				isPrime[j]=1;		
			}
		}	
	}
	
	for(i=0;i<=n;i++)
	{
	  if(isPrime[i]==0)
	  {
	  	ans[idx]=i;
	  	//printf("%d\t",i);
	  	idx++;
	  }
		
	}
	
	//printf("prim[%d]:%d\n",idx,ans[idx-1]);
	
}



int main()
{

	int n,T,temp2,i;
   ull temp;
	sieve(1000);
	cin>>T;
	while(T--)
	{
		cin>>n;
		temp=n;
		temp2=sqrt(n);
		for(i=0;i<idx;i++)
		{
			
			if(ans[i]>temp2)break;
			//printf("%d\n",ans[i]);
			if(n%ans[i]==0)
			{
			
			    while(n%ans[i]==0)
			    {
					n=n/ans[i];
				    //printf("n=%d\n",n);
					
				}
				
				temp=(temp*(ans[i]-1))/ans[i];
			}
			
			//printf("n=%d\n",n);
		
		}
	
		if(n>1){temp=(temp*(n-1))/n;}
		//printf("flag\n");
		printf("%llu\n",temp);
	}
}


