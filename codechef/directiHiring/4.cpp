#include<bits/stdc++.h>
#define inf 10000000;
using namespace std;


int main()
{

	int T,n,k,p,i,j,temp;
	int dp1[2001],dp2[2001],a[1005],b[1005];
	cin >> T;
	while(T--)
	{
		cin >> n >> k >> p;
		
		for(i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		for(i=0;i<n;i++)
		{
			cin >> b[i];
		}
		for(i=0;i<n;i++)
		{
			dp1[i]=inf;
			dp2[i]=inf;			
		}
		dp1[0]=a[0];
		dp2[0]=b[0];
		for(i=0;i<n;i++)
		{
			temp=dp1[i];
			for(j=i+1;j<=i+k;j++)
			{
				if(j<n)
				{
				dp1[j]=min(dp1[j],temp+a[j]);			
				dp2[j]=min(dp2[j],temp+b[j]+p);
				}
			}
			temp=dp2[i];
			for(j=i+1;j<=i+k;j++)
			{
				if(j<n)
				{
				dp2[j]=min(dp2[j],temp+b[j]);			
				dp1[j]=min(dp1[j],temp+a[j]+p);
				}
			}
			
		
		}
		
		cout << min(dp1[n-1],dp2[n-1])<< endl;
		
		
	}
	
	return 0;
	
}
