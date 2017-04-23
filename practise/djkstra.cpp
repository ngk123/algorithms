#include<iostream>
#include<cstdlib>
#include<queue>
#include<vector>

#define INF 1000000007

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef pair<int,int> pii;
typedef vector<pair<int, int> > vpii;

int printGraph(vii graph);
int dijkstra(int nodes, int src, vii graph);

int dijkstra(int nodes, int src, vector<vpii > graphN){
	int i,currN,dest,tempWt;
	vi distances(nodes);
	vi visited(nodes);
	
	cout << endl;
	priority_queue<pii, vpii, greater<pii > >	minHeap;
	pii tempP,p2,p3;
	
	for(i=0;i<nodes;i++){
		if(i==src){	
			tempP=make_pair(0, i);
			distances[i]=0;
			minHeap.push(tempP);		
		}
		else{
			distances[i]=INF;
		}
	}	

	while(minHeap.size()>0){
		tempP=minHeap.top();			
		minHeap.pop();			
		cout << "Popped from Queue : node " << tempP.second << "  " << tempP.first << endl;
		currN=tempP.second;		
		if(visited[currN]==1)continue;
		visited[currN]=1;
		int adjEdges=graphN[currN].size();
		for(i=0;i<adjEdges;i++){
			p2=graphN[currN][i];
			dest=p2.first;
			tempWt=p2.second;
			if(!visited[dest] && (distances[currN]+tempWt)<distances[dest]){
				distances[dest]=distances[currN]+tempWt;
				minHeap.push(make_pair(distances[dest],dest));
			}
		}			
	}	
	cout << "Final Distance from the Source :"<< endl;	
	for(i=0;i<nodes;i++){
		cout <<i << " : " <<  distances[i] << endl;
	}
	return 0;
}

int printGraph(vector<vpii > graph){
	int i,j,n,rowS;
	n=graph.size();
	cout << "No. of the nodes : " << n <<  endl;	
	for(i=0;i<n;i++){
		cout << i << "---> ";
		rowS=graph[i].size();
		for(j=0;j<rowS;j++){
			cout << "("<<graph[i][j].first << "," << graph[i][j].second <<")\t";		
		}
		cout << endl;
	}
	return 0;
}

int main(){
	pii tempP;	
	vi tempV;
	int i,j,n,temp,ans,src, dest, wt,e;
	cout << "Enter the number of nodes in the graph : " << endl;
	cin >> n;
	vector<vpii > graphN(n);
	cout << "Enter the number of edges : " << endl;	
	cin >> e;
	for(i=0;i<e;i++){
		cin >> src >> dest >> wt;
		tempP.first=dest;
		tempP.second=wt;	
		graphN[src].push_back(tempP);		
	}
	printGraph(graphN);	
	cout << "enter the source from which shortest path need to be calculated. " << endl;
	cin >> src;	
	dijkstra(n,src,graphN);
	graphN.clear();
	
	return 0;
}






