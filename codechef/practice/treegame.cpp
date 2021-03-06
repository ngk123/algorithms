#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main()
{
	int t,n,i,a,b;
//	vi edge[10000];
	cin >> t;
	
	while(t--)
	{	
		cin >> n;
		queue<pii> Q;
		int depth[10002];
		vi edge[10002];
		vi visited(n,0);
		
		for(i=0;i<n-1;i++)
		{
			cin >> a >> b;
			edge[a-1].push_back(b-1);
			edge[b-1].push_back(a-1);
		}	
		
		visited[0]=1;	
		
		Q.push(pii(0,0));
		
		depth[0]=0;
		
		while(!Q.empty())
		{
			pii temp2;
			pii temp=Q.front();
			Q.pop();
			a=temp.first;
			//cout << "a" << a << endl;
			visited[a]=1;
			
			depth[a]=temp.second;
				
			int sizev=edge[a].size();
			
			for(i=0;i<sizev;i++)
			{
			
				if(visited[edge[a][i]]==0)
				{
						
					temp2.first=edge[a][i];
					temp2.second=temp.second+1;	
					Q.push(temp2);		
						
				}
			}			
		}
		
		sort(depth,depth+n);
		
		int cnt=0;
		int start=0;
		int end=n-1;
		int flag=0;
		vi visited2(n,0);
		while(1)
		{
			cnt++;
			if(cnt%2==1)
			{
				visited2[start]=1;			
				start++;
				
				while(1)
				{
					if(start>end) { flag=1; break;}
					if(depth[start]==depth[start-1]){visited2[start]=1;	}
					else break;
					start++;	
				}			
			}
			else
			{
				visited[end]=1;
				end--;
				if(start>end) { flag=1; break;}		
			}
			if(flag==1)break;
			
		
		}
		cout << cnt << endl;
		
	
	}
	
	return 0;
}
