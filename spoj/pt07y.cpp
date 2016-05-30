#include<iostream>
#include<queue>
#include<vector>
using namespace std;



vector<int> edges[10001];
vector<int> visited(10001,0);


int bfs(int n)
{
	int i,flag;
	queue<pair<int,int> > m;
	pair<int,int> temp;
	m.push(pair<int,int>(0,-1));
	while(!(m.empty()))
	{
		temp=m.front();		
		visited[temp.first]=1;
		for(vector<int>::iterator it=edges[temp.first].begin();it!=edges[temp.first].end();++it)
		{
			if(*it!=temp.second && visited[*it]==1)
			{
				cout << "NO" << endl;
				return 0;
			}
			else if(*it!=temp.second && visited[*it]==0)
			{
				m.push(pair<int,int>(*it,temp.first));			
			}		
		}	
		m.pop();
	
	}	
	flag=1;
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}


int main()
{
	int n,m,i,a,b;
	cin >> n>> m;
	for(i=0;i<m;i++)
	{
		cin >> a >> b;
		edges[a-1].push_back(b-1);
		edges[b-1].push_back(a-1);			
	}
	
	bfs(n);
	return 0;
}
