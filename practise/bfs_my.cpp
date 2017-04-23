#include<iostream>
#include<queue>
#include<vector>


using namespace std;


void bfs(int origin, vector<vector<int> > graph)
{
	queue<int> traversal;
	vector<int> visited(graph.size());
	int topN,i;
	
	traversal.push(origin);
	
	while(!traversal.empty()){
		topN=traversal.front();
		visited[topN]=1;
		traversal.pop();
		
		cout << topN << " ";
		
		
		for(i=0;i<graph[topN].size();i++){
			if(visited[graph[topN][i]]==0)traversal.push(graph[topN][i]);		
		}
					
	}
 

cout << endl;


}


int main(){


	int nodes,edges,i,src,tar,origin;
	
	cin >> nodes >> edges;
	vector<vector<int> > graph(nodes);
	
	for(i=0;i<edges;i++){
		cin >> src >> tar;		
		graph[src].push_back(tar);		
	}	
	
	cout << "Enter the starting point of BFS : \n";
	cin >> origin;
	bfs(origin, graph);
	
	return 0;
}


