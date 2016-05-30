#include<cstdio>
#include<queue>
#include<cstring>
#include<vector>
#include<iostream>
#include<utility>
#include<algorithm>
#define MAX_NODES 2002
#define UNINITIALIZED -1
#define INF 3000


using namespace std;
pair <int,int> cord[1000];

vector<int> graph[MAX_NODES];
int capacities[MAX_NODES][MAX_NODES];
int flowPassed[MAX_NODES][MAX_NODES];
int parentList[MAX_NODES];
int currentPathCapacity[MAX_NODES];



int bfs(int startNode ,int endNode)
{
  int currentNode,i,to;
  memset(parentList, UNINITIALIZED, sizeof(parentList));
  memset(currentPathCapacity, 0, sizeof(currentPathCapacity));
  queue<int> q;
  q.push(startNode);

  parentList[startNode]=-2;
  currentPathCapacity[startNode]=INF;

  while(!q.empty())
    {
      currentNode=q.front();
      q.pop();
      
      for(i=0;i<graph[currentNode].size();i++)
	{
	  to=graph[currentNode][i];
	  if(parentList[to]==UNINITIALIZED)
	    {
	      if(capacities[currentNode][to]-flowPassed[currentNode][to]>0)
		{
		  parentList[to]=currentNode;
		  currentPathCapacity[to]=min(currentPathCapacity[currentNode],capacities[currentNode][to]-flowPassed[currentNode][to]);
		  
		  
		  if(to==endNode)return currentPathCapacity[endNode];
		  
		q.push(to);
		}
	      
	    }
	  
	  
	}
      
    }
  return 0;
}


int edmondsKarp(int startNode , int endNode)
{
  int flow,currentNode,previousNode;
  int maxFlow=0;

  while(true)
    {
      flow=bfs(startNode,endNode);

      if(flow==0)
	break;

      maxFlow+=flow;
      
      currentNode=endNode;
      
      
      while(currentNode != startNode)
	{
	  previousNode=parentList[currentNode];
	  flowPassed[previousNode][currentNode]+=flow;
          flowPassed[currentNode][previousNode]-=flow;
	  currentNode=previousNode;
       
	}
    }
  
  return maxFlow;

}






int main()
{
  int T,N,x,y,i,j,inx,temp,temp1,source,sink,distinctRow,distinctCols,maxFlow;

  source=0;
  sink=2001;
  // point cord[1001]; 
  cin>>T;
  // cout<<T<<endl;
  
  while(T--)
    {
      cin>>N;
      for(i=0;i<N;i++)
	{
	  cin>>x>>y;
	  cord[i].first=x;
	  cord[i].second=y;
	  //cout<<cord[i].first<<cord[i].second<<endl;
	}
      //Indexing Part
      sort(cord,cord+N);
      inx=1;
      temp=cord[0].first;
      cord[0].first=inx;
      temp1=cord[0].second;
      cord[0].second=cord[0].first;
      cord[0].first=temp1;

      for(j=1;j<N;j++)
	{
	  if(cord[j].first!=temp)
	    {
              inx++;
	      temp=cord[j].first;
   	      cord[j].first=inx;
              temp1=cord[j].second;
              cord[j].second=cord[j].first;
              cord[j].first=temp1;               
	    }
	  else
	    {
	      cord[j].first=inx;
	      temp1=cord[j].second;
              cord[j].second=cord[j].first;
              cord[j].first=temp1; 
	    }
	  // cout<<"X:"<<cord[j].first<<"Y:"<<cord[j].second<<endl;
	}

      distinctRow=inx;      


      sort(cord,cord+N);
      inx=1001;
      temp=cord[0].first;
      cord[0].first=inx;
      temp1=cord[0].second;
      cord[0].second=cord[0].first;
      cord[0].first=temp1;
      
      for(j=1;j<N;j++)
	{
	  if(cord[j].first!=temp)
	    {
              inx++;
	      temp=cord[j].first;
   	      cord[j].first=inx;
              temp1=cord[j].second;
              cord[j].second=cord[j].first;
              cord[j].first=temp1;               
	    }
	  else
	    {
	      cord[j].first=inx;
	      temp1=cord[j].second;
              cord[j].second=cord[j].first;
              cord[j].first=temp1; 
	    }
	  // cout<<"X:"<<cord[j].first<<"Y:"<<cord[j].second<<endl;
	}
      distinctCols=inx;
      
      // for(j=0;j<N;j++)
	//	{
	  //	  cout<<"X:"<<cord[j].first<<"Y:"<<cord[j].second<<endl;
	  //	}
      
      //Indexing Part Ends Here
      for(i=0;i<N;i++)
	{
	  capacities[cord[i].first][cord[i].second]=1;
	  graph[cord[i].first].push_back(cord[i].second);
	  graph[cord[i].second].push_back(cord[i].first);	  
	}
      
      for(i=1;i<=distinctRow;i++)
	{
	  capacities[0][i]=1;
	  graph[0].push_back(i);
	  graph[i].push_back(0);
	}

     for(i=1001;i<=distinctCols;i++)
	{
	  capacities[i][2001]=1;
	  graph[2001].push_back(i);
	  graph[i].push_back(2001);
	}

     maxFlow=0;
     maxFlow=edmondsKarp(source,sink); 
     memset(flowPassed, 0, sizeof(flowPassed));
     
     memset(capacities, 0, sizeof(capacities));
     cout<<maxFlow<<endl;
     
     
     for(i=0;i<2002;i++)
      graph[i].clear();
    }
  return 0;
}

