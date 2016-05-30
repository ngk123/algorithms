#include<iostream>
#include<string>
using namespace std;

int convert(string str)
{
//	cout << "Str" << str << endl;
	int ans=0;
	ans=((int)str[0]-48)*10 +((int)str[1]-48) ;
	return ans;
}

int main()
{
	int i,len,num;
	long long int dp[5002];
	string str;

	while(1)
	{
		cin >> str;
		len=str.length();
		if(len==1 && str[0]=='0')break;	
		if(len>=1 && str[0]!='0'){ dp[0]=1; }
		if(len>=2) 
		{ 
			num=convert(str.substr(0,2)); 
			//cout<< "Num" << num << endl;
			if(str[1]=='0')
			{
				if(num>=10 && num<=26) dp[1]=1;
				else {i=len;dp[len-1]=0;}
			
			}
			else if(num<=26)
			{
				dp[1]=2;		
			}
			else
			{
			 	dp[1]=1;
			}
		}
		//cout << dp[1] << endl;
		
		for(i=2;i<len;i++)
		{
			num=convert(str.substr(i-1,2)); 
			if(str[i]=='0')
			{
				if(num>=10 && num<=26) dp[i]=dp[i-2];
				else {dp[len-1]=0; break;}
			
			}
			//cout<< "Num" << num << endl;
			else if(num<=26 && num>=11)
			{
				dp[i]=dp[i-1]+dp[i-2];
			}	
			else 
			{
				dp[i]=dp[i-1];		
			}
			//cout << dp[i] << endl;
		}
		
		cout << dp[len-1] << endl;
		
		
	}





return 0;
}
