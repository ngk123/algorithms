#include<cstdlib>
#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class costFromS
{
	public:
		int idx;
		int cost;		
};

struct minCost
{
	bool operator()(const costFromS& a, const costFromS& b)
	{
		return a.cost < b.cost;	
	}
};

int main()
{
	int a,b,dist[1004],p,q,i,tempDist,tempIdx;
	vector<int> edges[1004];
	costFromS first,r,tempCost;
	priority_queue<costFromS, vector<costFromS>, minCost> minH;
	scanf("%d%d",&a,&b);
	
	for(i=1;i<a;i++)
	{
		dist[i]=1010;
	}
	dist[0]=0;
	
	int visited[1004]={0};
	for(i=0;i<b;i++)
	{
		scanf("%d%d",&p,&q);	
		edges[p].push_back(q);
		edges[q].push_back(p);
	}
	
	first.idx=0;
	first.cost=0;
	minH.push(first);
	
	while(!minH.empty())
	{
		r=minH.top();		
		printf("Small Index:%d\n",r.idx);
		minH.pop();
		visited[r.idx]=1;
		tempDist=r.cost;		
	
//			for(vector<int>::iterator it=edges[r.idx].begin();it!=edges[r.idx].end();++it)
					for(int j=0; j< edges[r.idx].size();j++)
			{
				tempIdx=edges[r.idx][j];	
									printf("Neighbour : %d\n",tempIdx);			
				if(dist[tempIdx]>=tempDist+1 && visited[tempIdx]==0)
				{
					//printf("Neighbour : %d\n",tempIdx);
					tempCost.idx=tempIdx;
					tempCost.cost=tempDist+1;
					dist[tempIdx]=tempDist+1;
					minH.push(tempCost);
				}				
			}							
	}
	
	for(i=1;i<a;i++)
	{
		if(dist[i]==1010)
		printf("-1\n");
		else
		printf("%d\n",dist[i]);		
	}

	return 0;
}