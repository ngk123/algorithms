#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;


int main()
{
	int n,i,t2,temp,cnt=0,a,j;
	vector<int> v,v2;
	vector<pii> vp,vp2;
	cin >> n ;
	for(i=0;i<n;i++)
	{
		cin >> a;
		vp.push_back(pii(a,i));
	}
	sort(vp.begin(),vp.end());
	for(i=0;i<n;i++)
	{
		if(vp[i].second>i)
		{
			vp2.push_back(pii(i,vp[i].second));
		}				
	}
	cout << vp2.size() << endl;	
	for(i=0;i<vp2.size();i++)
	{
		cout << vp2[i].first << " "<< vp2[i].second << endl;
	}	
	return 0;
}