#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#define mod 1000000007
using namespace std;
typedef long long int lli;

int main()
{
	int T,n,a,i,j,k,temp,num,len,max;
	
	string str;
	cin >> T;
	while(T--)
	{
		int edge[11][102]={0};
		cin >> n;
		max=(1<<n);
		getchar();
		for(i=0;i<n;i++)
		{			
			getline(cin, str);
			len=str.length();
			num=0;
			for(j=0;j<len;j++)
			{
			//cout << str[j] << endl;	
				if(str[j]!=' ')
				{
					num=(num*10)+((int)str[j]-48);
				}
				else 
				{	
					edge[i][num]=1;
					num=0;
				}
			}
			//cout << i << ":" <<num << endl;
			edge[i][num]=1;
			//edge[i][a]=1;
		}
		
		lli dp[1026][102]={0};
		for(i=0;i<101;i++)
		{
			dp[0][i]=1;
		}
		for(i=1;i<max;i++)
		{
			temp=i;
			for(j=0; ;j++)
			{				
				if(temp<=0)break;
				if(temp&1)
				{
					for(k=1;k<101;k++)
					{
						if(edge[j][k]==1)
						{
							dp[i][k]+=dp[i^(1<<j)][k-1];
							dp[i][k]%=1000000007;
						}
					}
				}
				temp=temp>>1;							
			}	
			for(j=1;j<101;j++)
			{
				dp[i][j]+=dp[i][j-1];	
				dp[i][j]%=1000000007;		
			}		
		}
	cout << dp[max-1][100] << endl;	
	}
return 0;	
}
