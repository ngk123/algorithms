#include<bits/stdc++.h>

using namespace std;

int lcs(string str1,string str2,int len)
{
	int i,j,cnt;
	int dp[2][len+1];
	i=0;
	for(j=0;j<=len;j++)
	{	
		dp[i][j]=0;
	}

	for(cnt=1;cnt<=len;cnt++)
	{
		i++;
		i=i%2;
		for(j=0;j<=len;j++)
		{
			if(j==0)
			{
				dp[i][j]=0;
			}
			else if(str1[i-1]==str2[j-1])
			{
				dp[i][j]=dp[(i+1)%2][j-1]+1;			
			}
			else
			{
				dp[i][j]=max(dp[(i+1)%2][j],dp[i][j-1]);			
			}				
		}	
	}
	return dp[len%2][len];
}

int main()
{	
	int i,len,ans;
	string str,str2="";
	cin >> str;
	cout << str << endl ;
	len=str.length();
	cout << len << endl;
	for(i=0;i<len;i++)
	{
		str2=str2+str[len-i-1];
	}
	cout << str2 << endl;
	ans=lcs(str,str2,len);		
	cout << ans << endl;
	return 0;
	
}
