#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#define infi 1000000000
using namespace std;
typedef pair<int,int> pii;
typedef vector<pair<int,int> > vpii;
typedef struct lesser{
	bool operator()(const pii& a,const pii& b)
	{
		return a.first>b.first;
	}
}comp;



int visited[10000];
vpii weight[10000];
int dist[10000];	

int dj(int s, int d, int v)
{
	int i,len;
	pii temp,temp2;
	priority_queue<pii,vpii,comp> Q;
	
	for(i=0;i<v;i++)
	{
		visited[i]=0;
		dist[i]=infi;
	}
	dist[s-1]=0;
	temp.first=0;
	temp.second=s-1;
	Q.push(temp);
	while(!(Q.empty()))
	{
		temp=Q.top();
		Q.pop();
		if(visited[temp.second]==0)
		{
			len=weight[temp.second].size();
			for(i=0;i<len;i++)
			{
				if(visited[temp.second]==0 && temp.first+weight[temp.second][i].first<dist[weight[temp.second][i].second])	
				{
					dist[weight[temp.second][i].second]=temp.first+weight[temp.second][i].first;				
					temp2.first=dist[weight[temp.second][i].second];
					temp2.second=weight[temp.second][i].second;
					Q.push(temp2);					
				}		
			
			}
		}
	}
	for(i=0;i<v;i++)
	{
		weight[i].clear();	
	}		
		
		if(dist[d-1]!=infi)
		cout << dist[d-1] << endl;
		else cout << "NO" << endl;
		return 0;
}


int main()
{
	int T,v,k,a,b,c,i,s,d;
	cin >>T;
	
	while(T--)
	{
		cin >> v >> k;
		
		for(i=0;i<k;i++)
		{
			cin >> a >> b >> c;
			weight[a-1].push_back(pii(c,b-1));		
		}
		
		cin >> s >> d;
		
		dj(s,d,v);
	
	}
	
	return 0;


}
