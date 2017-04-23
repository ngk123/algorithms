#include<iostream>
#include<queue>
#include<vector>
#include<stack>

using namespace std;


void dfs(int origin, vector<vector<int> > graph){
	stack<int> traversal;
	int topN,i,flag;
	vector<int> visited(graph.size());
	traversal.push(origin);
	visited[origin]=1;
	cout << origin << "  ";
	
	while(!traversal.empty()){
		topN=traversal.top();
		flag=0;
		for(i=0;i<graph[topN].size();i++){
			if(visited[graph[topN][i]]==0){
				traversal.push(graph[topN][i]);
					visited[graph[topN][i]]=1;
				cout << graph[topN][i] << "  ";
				flag=1;
				break;
			}		
		}	
		
		if(flag==0){
			traversal.pop();		
		}						
	}

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
	dfs(origin, graph);
	
	return 0;
}
