#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
int main()
{
	int n,m,flag,i,j,k,l,temp,b,a;
	stack<int> dfs;
	vi edges[101],final[101], start,current;
	vi visited(101,0);
	cin >> n >> m;
	
	for(i=0;i<m;i++)
	{
		cin >> b;
		cin >> k;
		for(j=0;j<k;j++)
		{
			cin >> a;
			edges[a-1].push_back(b-1);
		}
	}
	
	for(i=0;i<n;i++)
	{
		sort(edges[i].begin(),edges[i].end());
	}
	
	
	
	
	for(i=0;i<n;i++)
	{
		
		if(visited[i]==1)
		{	
			continue;
		}
		else
		{
			dfs.push(i);
			//cout << "Pushed :" << i << endl;
			visited[i]=1;
		}
		
		while(!(dfs.empty()))
		{
			a=dfs.top();
			flag=0;
			temp=edges[a].size();
			//cout << "Hi I am on th top : " << a << endl;
			for(j=0;j<temp;j++)
			{
				if(visited[edges[a][j]]==0)
				{
					dfs.push(edges[a][j]);
					///cout << "Pushed :" << edges[a][j]<< endl;
					visited[edges[a][j]]=1;
					flag=1;
					break;
				}
			}
			
			if(flag==0)
			{
				current.push_back(dfs.top());
				dfs.pop();
				//cout << "Size :" << dfs.size() << endl;
			}
			
		}
		
		temp=current.size();
		start.push_back(current[temp-1]);
		//cout<< "Current : "<< endl;
		//cout << current[temp-1]+1 << " ";
		for(l=temp-2;l>=0;l--)
		{
			final[current[temp-1]].push_back(current[l]);
			//cout << current[l]+1 << " " ;
		}
		current.clear();
	}
		

		sort(start.begin(),start.end());
		for(i=0;i<start.size();i++)
		{
			cout << start[i]+1 << " " ;
			temp=final[start[i]].size();
			for(j=0;j<temp;j++)
			{
				cout << final[start[i]][j]+1 << " ";
			}
				
		}
		cout << endl;

	return 0;
}
