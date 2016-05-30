#include<bits/stdc++.h>

using namespace std;

int avg,p,w[101];

int dfs(int start,int part,int till)
{
	int local=0,a,b,i,sum,pLocal=0,c;	
	if(start>=p)
	return till;
	if(part==0)
	{
		for(i=start;i<p;i++)
		{
			local+=w[i];
		}
		return max(till,local);
	}	
	
	for(i=start;i<p;i++)
	{
		local+=w[i];
		//cout << local << endl;
		if(local>avg)
		{
			a=dfs(i+1,part-1,max(till,local));
			b=dfs(i,part-1,max(till,local-w[i]));
			c=1000000;
			if(i-1>=start && local-w[i]==avg)
			{
				c=dfs(i-1,part-1,max(till,local-w[i]-w[i-1]));				
			}
			return min(a,min(b,c));	
		}		
	}		
	return till;
}

int main()
{
	int m,i,sum=0;
	cin >> m >> p;
	for(i=0;i<p;i++)
	{
		cin >> w[i];	
		sum+=w[i];
	}	
	avg=sum/m;
	cout << dfs(0,m-1,0) << endl;	
	return 0;
}

