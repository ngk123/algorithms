#include<iostream>
#include<queue>
#include<map>
using namespace std;
typedef long long int lli;
typedef pair<lli,lli> pii;

int main()
{
	lli n,s,i,cnt,ans,sum,b;
	
	map<lli,lli> a;
	a.insert(pii(0,1));
	
	cin >> n >> s;
	sum=0;
	ans=0;
	for(i=0;i<n;i++)
	{
		cin>>b;
		sum+=b;
		cnt=a[sum-s];
		//cout << i<<" "<<cnt << endl;
		ans+=cnt;
		a[sum]++;	
	}
	cout<< ans << endl;

	return 0;
}