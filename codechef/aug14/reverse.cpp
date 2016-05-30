#include<set>
#include<vector>
#include<iostream>
#include<cstdio>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<vpi> vvpi;
typedef long long int lli;

vector<lli> dist2(100001,100000000000);
vector<lli> dist(100001,100000000000);
vvpi G(100001);

int dj(int source)
{
	set<pi> Q;
	dist[0]=0;
	Q.insert(pi(0,source));	
	while(!(Q.empty()))
	{
		pi top=*Q.begin();
		Q.erase(Q.begin());
		int node=top.second;
		int wt=top.first;
		for(vpi::iterator it=G[node].begin();it!=G[node].end();++it)
		{
			int neighbour=it->second;
			int cost=it->first;			
			if(dist[neighbour]>wt+cost)
			{
				if(dist[neighbour]!=100000000000)
				{
					Q.erase(Q.find(pi(dist[neighbour],neighbour)));
				}
				
				Q.insert(pi(wt+cost,neighbour));
				dist[neighbour]=wt+cost;			
			}	
		}		
	}
	return 0;
}

int main()
{
	int n,m,a,b,w1,w2,i;
	w1=0;
	w2=10000;
	cin >> n >> m;
	
	for(i=0;i<m;i++)
	{
		cin >> a >> b; 
		if(a!=b)
		{
		G[a-1].push_back(pi(w1,b-1));
		G[b-1].push_back(pi(w2,a-1));	
		}
	}	
	
	dj(0);
	if(dist[n-1]==100000000000)
	{
		cout << -1 << endl;		
	}
	else
	{
		cout << dist[n-1]/10000 << endl;
	}
	return 0;

}
