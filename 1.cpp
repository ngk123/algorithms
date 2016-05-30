#include<stdio.h>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int n;	
	int fac[1001]={0};
	fac[0] = 1;
	fac[1] = 1;
	for(int i=2;i<=1000;i++)
	fac[i] = i;
	for(int i=2;i<=1000;i++)
	{
		if(fac[i]==i)
		{
			for(int j=i+i;j<=1000;j=j+i)
			{
				fac[j] = i;
			}
		}
		//cout << fac[i] <<" ";
	}
	//cout << endl;
	
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++)
		cin >> A[i];
	int m;
	cin >> m;
	
	
	
	for(int i=0;i<m;i++)
	{
		string str;
		cin >> str;
		int a,b;
		cin >> a >> b;
		long long int ans = 1;
		if(str[0]=='Q')
		{
			int arr[1001]={0};
			for(int j=a;j<=b;j++)
			{
				int val = A[j];

				while(val != 1)
				{
					int ct = 0;
					int fc = fac[val];

					while(val%fc == 0)
					{
						val = val/fc;
						ct++;
					}
					arr[fc] = max(arr[fc],ct);

				}
			}
			
			for(int i=0;i<=1000;i++)
			{
				while(arr[i]!=0)
				{
					ans = (ans * i)%mod;
					arr[i]--;
				}
			}
			cout << ans%mod << endl;
		}
		else
		{
			A[a]=b;
		}
	}
	
	return 0;	
}
