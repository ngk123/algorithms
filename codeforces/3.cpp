#include<iostream>
using namespace std;
typedef long long int lli;
int dp[1001][1001];
int cnt=0;
void recur(int arr[], int idx, int k, int d,int n)
{
	int i;
	if(cnt==n)return ;
	if(idx==d)
	{
		for(i=0;i<d;i++)
		{
			dp[cnt][i]=arr[i];
		}	
		cnt++;
	}	
	else
	{
		for(i=0;i<k;i++)
		{
			arr[idx]=i;
			recur(arr,idx+1,k,d,n);	
			if(cnt==n)return ;					
		}	
	}
}

int main()
{
	int n,k,d,i,j,flag;
	flag=0;
	int arr[1002];
	lli max;
	cin>>n>>k>>d;
	max=1;
	for(i=0;i<d;i++)
	{
		max*=k;
		if(max>=n)break;
	}	
	if(max<n)
	{
		cout << -1 << endl;
		return 0;
	}
	recur(arr,0,k,d,n);
	for(i=0;i<d;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<dp[j][i]+1<<" ";
		}
		cout << endl;
	}
	return 0;
}
