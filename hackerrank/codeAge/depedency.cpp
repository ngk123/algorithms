#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;



#define maxSize 20005

vector<vector<int> > graph(maxSize) ;
vector<int> toInstall;
vector<int> inEdgeCount;
set<int> dependencies;


void findAllProgramsToInstall(int n, int m){
	vector<int> visited(n);		
	for(i=0;i<m;i++){
		temp=toInstall[i];
		
		dependencies.insert
		
		
	}	

}


int main(){
	int q,n,m,i,j,d,pi,di;

	
	cin >> q;
	cin >> n >> m;
	
	for(i=0; i<n;i++){
		cin >> d;
		for(j=0;j<d;j++){
			cin >> pi;
			graph[pi-1].push_back(i);
		}
		inEdgeCount.push_back(d);	
	}
	
	for(i=0;i<m;i++){
		cin >> di;
		toInstall.push_back(di);
	}
		
	findAllProgramsToInstall(m);
		
				
				
						
	return 0;
}
