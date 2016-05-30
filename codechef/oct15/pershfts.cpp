#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
	int t,n,a,i,diff,sumDiff,stdDiff,c,d,k,j;
	int p[100002],q[100002],r[100002];
	int fact[6]={1,1,2,6,24,120};
	long long int ans,cnt;
	cin >> t;
	
	while(t--)
	{
		cin >> n >> k;
		for(i=0;i<n;i++)
		{
			cin >> p[i];
		}		
		for(i=0;i<n;i++)
		{
			cin >> r[i];
			q[r[i]]=i;
		}
		sumDiff=0;
		for(i=0;i<n;i++)
		{
			/*
			c=p[i];
			d=p[(i+k-1)%n];			
			diff=(q[d]-q[c]);
			if(diff<0)diff+=n;			
			*/
						
			c=p[i];
			diff=(q[c]
			if(diff<0)diff+=n;			
			sumDiff+=diff;			
			
		}				
		stdDiff=(k-1)*n;
		if(sumDiff%(k-1)==0)
		{		
			//cout << "YES\n";
			ans=0;
			for(i=0;i<n;i++)
			{
				a=r[i];
				cnt=0;
				for(j=i+1;j<n;j++)
				{
					if(r[j]<a)cnt++;
				}
				ans+=((cnt*fact[cnt])%mod);				
			}
			cout << (ans+1)%mod << endl;			
		}	
		else
		{
			cout << "-1\n";
		}
		
	}	
	

	return 0;
}
