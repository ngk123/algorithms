#include<bits/stdc++.h>
using namespace std;
#define inf 100000


int main()
{	
	int n,i,flag,num,j,k;
	string str;
	while(1)
	{
		cin >> n;        
		if(n==0)break;
        int dist[n+1][n+1];
        
        for(i=1;i<=n;i++)
        	for(j=1;j<=n;j++)
        		dist[i][j]=inf;
        
        
        for(i=1;i<=n;i++)
        {
        	cin >> num >> str;
        	
        	if(str.compare("true")==0)
        	{
        		dist[i][num]=2;        		
        	}	
        	else
        	{
        		dist[i][num]=1;
        	} 	
        	
        }
        		
        
        for(k=1;k<=n;k++)
        	for(i=1;i<=n;i++)
        		for(j=1;j<=n;j++)
        		{
        			if(dist[i][j]> dist[i][k]+dist[k][j])
        				dist[i][j]=dist[i][k]+dist[k][j];        				
        		}
		flag=0;        
        for(i=1;i<=n;i++)
        if(dist[i][i]%2==1 && dist[i][i]<inf)
        {
        	flag=1;
        	break;
        }
        
        
		
		if(flag==1)
		{
			cout << "PARADOX\n";
		}
		else
		{
			cout << "NOT PARADOX\n";
		}		
		
	}
	return 0;
}

