#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
	lli t,m,n1,n2,sum,temp2,temp,ans;
	cin >> t;
	
	while(t--)
	{
		cin >> n1 >> n2 >> m;		
		sum = (m*(m+1))/2;
		temp=min(n1,n2);
		temp2=max(n1,n2);
		if(temp>=sum)
		{
			ans=(temp2-temp)+2*(temp-sum);
		}
		else
		{
			ans=temp2-temp;
		}
		cout << ans << endl;		
	}
	
	return 0;
}

