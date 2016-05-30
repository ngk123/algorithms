#include<bits/stdc++.h>
using namespace std;
typedef long long lli;

map<int,lli> a;

lli solve(int n)
{
	lli res,temp;
	if(n==0)return 0;
	if(a.count(n)>0) return a[n];	
	
	
	res=n;
	temp=solve(n/2)+solve(n/3)+solve(n/4);
	res=max(n,temp);
	if(res<temp)res=temp;
	
	a[n]=res;
	return res;
}

int main()
{
	int n;
	while(cin>>n)
	{
		cout << solve(n) << endl;;
	}
	return 0;
}
