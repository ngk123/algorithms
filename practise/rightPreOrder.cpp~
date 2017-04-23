#include<bits/stdc++.h>

using namespace std;

typedef struct tree{
	struct tree *left,*right;
	int val;
}node;


bool check(vector<int> wt){

	int root=INT_MIN;
	int n=wt.size();
	stack<int> wtSt;
	
	for(int i=0;i<n;i++){
		
		if(wt[i]<root){
			return false;
		}
	
		while(!wtSt.empty() && wtSt.top()<wt[i]){		
			root=wtSt.top();
			wtSt.pop();		
		}
	
		wtSt.push(wt[i]);
	
	}	
	
	return true;		
}

int main(){
		
	int n,i,temp;
	cin >> n;	
	vector<int> wt(n);
	
	for(i=0;i<n;i++){
		cin >> temp;
		wt.push_back(temp);
	}		
		
	bool res=check(wt);	
	cout << res << endl;
		
	return 0;
}
