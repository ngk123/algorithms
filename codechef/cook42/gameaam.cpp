#include<bits/stdc++.h>
using namespace std;
int grundy(int a, int b)
{
	int temp2,temp;
	if(a>b)swap(a,b);	
	if(b%a==0) return b/a-1;	
	temp=grundy(b%a,a);	
	temp2=b/a;
	return (temp2<=temp)?temp2-1:temp2; 	
}
int main()
{	
	int t,n,ans,a,b;	
	ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		cin >> n;
		ans=0;
		while(n--)
		{
			cin >> a >> b;
			ans^=grundy(a,b);
		}			
		(ans==0)? cout << "NO\n" : cout <<"YES\n" ;			
	}	
	return 0;	
}
