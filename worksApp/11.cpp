#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,i,j,flag,an,temp,arr[101][101],row[101][101],col[101][101],ans1[101][101],ans2[101][101];
	
	cin >> m >> n;
	
	for(i=0;i<m;i++)
	{
		flag=0;
		an=1;
		for(j=0;j<n;j++)
		{
			cin >> arr[i][j];
			an=an&arr[i][j];
			if(arr[i][j]==1)
			{
				flag=1;
			}			
		
		}	
			for(j=0;j<n;j++)
			{
				ans1[i][j]=an;			
			}	
			
			
		
		
			
		if(flag==1)
		{
			for(j=0;j<n;j++)
			{
				row[i][j]=1;
			}	
		}
		else
		{	
			for(j=0;j<n;j++)
			{
				row[i][j]=0;
			}
		}		
	}
	
	
	for(i=0;i<n;i++)
	{
		flag=0;
		an=1;
		for(j=0;j<m;j++)
		{
			an=an&arr[j][i];
			if(arr[j][i]==1)
			{
				flag=1;
			}
		}	
		
		
			for(j=0;j<m;j++)
			{
				ans2[j][i]=an;			
			}
			
		if(flag==1)
		{
			for(j=0;j<m;j++)
			{
				col[j][i]=1;
			}	
		}
		else
		{	
			for(j=0;j<m;j++)
			{
				col[j][i]=0;
			}
		}		
	}
	flag=0;
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		temp=(ans1[i][j])|(ans2[i][j]);;
		ans1[i][j]=(ans1[i][j])&(ans2[i][j]);
		if(arr[i][j]==1 && temp==0)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		cout << "NO"<< endl;
	}
	else
	{
		cout << "YES"<< endl;
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
		cout << ans1[i][j] << " ";
		}
		cout << endl; 
	}
	}

}
