#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,p,i,half=0;
	string str;
	int arr[41];
	long long int ans;
	cin >> n >> p;
	for(i=0;i<n;i++)
	{
		cin >> str; 
		
		if(str.compare("half")==0)
		{
			arr[i]=0;
			
		}
		else
		{
			arr[i]=1;
			half++;
		}
	}
	
	
	int app=0;
	for(i=n-1;i>=0;i--)
	{
		if(arr[i]==1)
		{
			app=app*2+1;			
		}
		else
		{
			app=app*2;
		}
	}
	
	ans=(app*p);
	ans-=half*(p/2);
	cout << ans << endl;
	return 0;
	
}
