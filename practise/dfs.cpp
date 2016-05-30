#include<bits/stdc++.h>
using namespace std;
#define MAX 200
typedef pair<int,int> pii;

int visit[MAX][MAX];
int entry[MAX][MAX]; 

queue<pii > a;

int bfs(int i,int j,int n,int m)
{
	pii temp;
	int b,c;
	a.push(pii(i,j));	
	while(!a.empty())	
	{
		temp=a.front();
		b=temp.first;
		c=temp.second;
		a.pop();
		visit[b][c]=1;
		
		if(b-1>=0 && visit[b-1][c]==0 && entry[b-1][c]==1)
		{
			a.push(pii(b-1,c));			
		}
		if(b+1<n && visit[b+1][c]==0 && entry[b+1][c]==1)
		{
			a.push(pii(b+1,c));			
		}
		if(c-1>=0 && visit[b][c-1]==0 && entry[b][c-1]==1)
		{
			a.push(pii(b,c-1));			
		}
		if(c+1<m && visit[b][c+1]==0 && entry[b][c+1]==1)
		{
			a.push(pii(b,c+1));			
		}
	}
	return 0;
}	




int main()
{
	int n,m,cnt=0;
	string str;
	int i,j;
	cin>>n >> m;
	
	for(i=0;i<n;i++)
	{
		cin >> str;
		cout << str << endl;
		for(j=0;j<m;j++)
		{
			if(str[j]=='Y')
			{
				entry[i][j]=1;
			}
			else
			{
				entry[i][j]=0;
			}
		}
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout << entry[i][j] << " ";
		}
		cout << endl;
		
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(entry[i][j]==1 && visit[i][j]==0)
			{
				bfs(i,j,n,m);
				cnt++;
			}
			
		}
	}	
	cout << cnt << endl;
	cout << (1<<(cnt-1)) << endl;
	
}
