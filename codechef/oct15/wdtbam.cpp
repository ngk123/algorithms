#include<bits/stdc++.h>
using namespace std;

int main()
{	
	int t,n,ans,cnt,temp,i;
	vector< pair<int,int> > vpi;
	string str1,str2;
	cin >> t;
	
	while(t--)
	{			
		cnt=0;
		cin >> n;
		cin >> str1;
		cin >> str2;
		for(i=0;i<n;i++)
		{
			if(str1[i]==str2[i])
			{
				cnt++;
			}
		}	
		
		for(i=0;i<=n;i++)
		{
			cin >> temp;
			vpi.push_back(pair<int,int>(temp,i));			
		}
		sort(vpi.begin(),vpi.end());
		
		if(cnt==n)
		{
			ans=temp;
		}
		else
		{
			for(i=n;i>=0;i--)
			{
				if(vpi[i].second<=cnt)
				{
					ans=vpi[i].first;
					break;
				}	
			}		
		}		
		cout << ans << endl;
		vpi.clear();		
	} 
	return 0;
}
