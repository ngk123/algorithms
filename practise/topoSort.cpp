#include<iostream>
#include<queue>
#include<vector>
#include<stack>

using namespace std;

stack<int> topoSort;


void topo(int origin, vector<vector<int> > graph, vector<int>& visited ){
	stack<int> traversal;
	int topN,i,flag;

	traversal.push(origin);
	cout << "Pushing : " <<origin << endl;
	visited[origin]=1;
	
	while(!traversal.empty()){
		topN=traversal.top();
		flag=0;
		for(i=0;i<graph[topN].size();i++){
			if(visited[graph[topN][i]]==0){
				cout << "Pushing : " << graph[topN][i] << endl;
			
				traversal.push(graph[topN][i]);
				visited[graph[topN][i]]=1;
				flag=1;
				break;
			}		
		}	
		
		if(flag==0){
		
			
			topoSort.push(topN);
			cout << "\tPopped : " << topN <<endl;		
			traversal.pop();

		}						
	}

}



int main(){
	int nodes,edges,i,src,tar,origin,topN;	
	cin >> nodes >> edges;
	vector<vector<int> > graph(nodes);
	vector<int> inDegree(nodes);
	vector<int> visited(graph.size());
	for(i=0;i<edges;i++){
		cin >> src >> tar;		
		inDegree[tar]++;
		graph[src].push_back(tar);		
	}	
	
	
	for(i=0;i<nodes;i++){
		if(inDegree[i]==0)
			topo(i, graph,visited);
	}
		
	while(!topoSort.empty()){
		topN=topoSort.top();
		cout << topN << " **** ";
		topoSort.pop();		
	}
			
	return 0;
}
