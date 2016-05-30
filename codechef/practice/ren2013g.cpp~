#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
typedef pair<int,int> pii;
int edge[1010][1010]; 
int n;

int caldistance(int x1,int y1,int x2,int y2)
{
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);	
}

bool comp(pii a,pii b)
{
	return (a.first>b.first);
}

class compare{
	public:
	bool operator()(const pii& a,const pii& b)
	{
		return (a.first>b.first);
	}
};

int dj()
{
	vector<int> visited(n+2),dist(n+2,INF);
	priority_queue<pii,vector<pii>,compare> Q;
	pii t;
	int a,b,i;
	Q.push(pii(0,0));
	dist[0]=0;	
	while(!Q.empty())
	{
		t=Q.top();
		a=t.first;
		b=t.second;
		//cout << a  << " "<< b << endl;
		Q.pop();
		if(visited[b]==0)
		{
			visited[b]=1;
			dist[b]=a;
			if(b==n+1)return dist[b];
			for(i=0;i<=n+1;i++)
			{
				if(visited[i]==0 && dist[i]>(dist[b]+edge[b][i]))
				{
					Q.push(pii(dist[b]+edge[b][i],i));
				}
			}		
		}		
	}	
	return dist[n+1];
}

 
int main()
{
	int i,j,a,b;
	vector<pii> e;	
	cin >> n;
	
	e.push_back(pii(0,0));
	for(i=0;i<=n;i++)
	{	
		cin >> a >> b;
		e.push_back(pii(a,b));
	}
	
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			edge[i][j]=caldistance(e[i].first,e[i].second,e[j].first,e[j].second);			
		}	
	}	
	cout << dj() << endl;	
	return 0;

}

