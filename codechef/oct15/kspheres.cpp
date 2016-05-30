#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
	long long int d[1001][1001],cd[1001][1001],temp;

int main()
{
	int n,m,c,a,i,j;
	int u[1001]={0};
	int l[1001]={0};

	
	cin >> n >> m >> c;
	
	for(i=0;i<n;i++) { cin >> a; u[a]++;}
	for(i=0;i<m;i++) {cin >> a; l[a]++;}
	temp=0;
	d[0][0]=cd[0][0]=0;
	for(i=1;i<=1000;i++)
	{
		temp=u[i];
		d[0][i]=(temp*l[i])%mod;
		cd[0][i]=(d[0][i]+cd[0][i-1])%mod;
	}
	
	for(i=1;i<=1000;i++)
	{
		for(j=0;j<=1000;j++)
		{
			if(i>=j)
			{
				d[i][j]=0;
				cd[i][j]=0;
			}
			else
			{	
				d[i][j]=(cd[i-1][j-1]*d[0][j])%mod;
				cd[i][j]=(cd[i][j-1]+d[i][j])%mod;		
			}			
		}
		
		if(i>c)break;		
		cout << cd[i][1000]<< " ";	
	}
	
	cout << endl;
	
	return 0;
}
