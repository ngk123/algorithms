#include<bits/stdc++.h>
using namespace std;
int pf[5000002];
//int pd[5000002];
int main()
{	
	int t,n,rt,i,j;
	rt=sqrt(5000002)+1;
	for(i=2;i<=rt;i++)
	{
		if(pf[i]==1 || pf[i]==10)continue;
		else
		{
			if(i%4==1)
			{	
				pf[i]=10;
				//pd[i]=1;
				for(j=2*i;j<=5000000;j+=i)
				{
					pf[j]=10;
					//pd[j]=1;
				
				}
			}
			else
			{
				for(j=2*i;j<=5000000;j+=i)
				{
					if(pf[j]==0)
					pf[j]=1;
				}
			}			
		}		
	}
	
	
	
	
	for(i=rt;i<=5000001;i++)
	{
		if(pf[i]==0 && i%4==1)
		{
			for(j=i;j<=5000001;j+=i)
			{
				pf[j]=10;
			}
		}		
	}	
	
	cin >> t;
	while(t--)
	{
		scanf("%d",&n);
		if(pf[n]==10)
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
