#include<bits/stdc++.h>
using namespace std;
int dp[6005][6005]={0};
int main()
{
	int t,len,l,i,j;
	string str;
	cin >> t;
	while(t--)
	{
		
		cin >> str;
		len=str.length();
		for(i=0;i<len;i++)dp[i][i]=0;
		
		
		for(l=1;l<len;l++)
		{
			for(i=0;i<len-l;i++)
			{
				j=i+l;
				
				if(str[i]==str[j])
				{
					//cout << "Not Possible\n";
					if(i+1<=j-1)
					{
						dp[i][j]=dp[i+1][j-1];
					}
					else
					{
						dp[i][j]=0;
					}
				}
				else 
				{
					dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;			
				
				}			
			}			
		}		
		cout << dp[0][len-1] << endl;	
	}		
	return 0;
}
