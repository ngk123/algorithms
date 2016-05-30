#include<bits/stdc++.h>
using namespace std;


int dfs(string str,int a,int b,int c,int cnt,int n)
{
	int i;
	if(cnt==n)
	{
		cout << str << endl;
		return 0;
	}
	
	for(i=0;i<=9;i++)
	{
		if(i!=a && i!=b && i!=c)
		{
			
			if(i==4)
			{
				if(str[0]=='4')
				{
            		dfs(str+(char)(i+48),a,b,c,cnt+1,n);			 
            	}
            	else
            	{
            		;
            	}
			}
			else
			{
			  dfs(str+(char)(i+48),a,b,c,cnt+1,n);
			}
			
		}
	}
	

	return 0;
}


int main()
{
	int t,n,a,c,b,i;
	string str="";
	
	cin >> t;
	while(t--)
	{
		cin >> n;
		cin >> a >> b >> c;
		
		for(i=0;i<=9;i++)
		{
			if(i!=a && i!=b && i!=c)
			{
				dfs(str+(char)(i+48),a,b,c,1,n);
			}
		}
	}
	
	

	return 0;
}	
