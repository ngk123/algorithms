#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,a[101],i,can,ans,m,sum;
	
	cin >> n>>m;
	
	ans=0;
	for(i=0;i<n;i++)
	{
		
		cin >> a[i];
		
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		
		sum+=a[i];
		if(sum == m)
		{
			ans++;
			sum=0;
		}
		else if(sum>m)
		{
			ans++;
			sum=a[i];
			if(sum==m){ ans++;sum=0;}
			
		}
				
	}
	
	if(sum>0) ans++;
	cout << ans << endl;
	


	return 0;
}

