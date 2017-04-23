#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int,int> pii;
typedef vector<pii > vpii;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,c,b,m,i;
    pii temp;
    vpii mb;
    long long int ans;
    
    cin >> n >> c ;
    for(i=0; i<c;i++){
    	cin >> m >> b;
    	temp.first=b;
    	temp.second=m;
    	mb.push_back(temp);
    }
    
    sort(mb.begin(),mb.end());
    ans=0;
    for(i=c-1;i>=0;i--){
   		 temp=mb[i];
   		 //cout << "first  : " << temp.first << " second : "<< temp.second << endl;
   		
    	if(n>=temp.second){
    		ans+=(temp.second * temp.first );
    		n=n-temp.second;
    		
    		//cout << "first : " << n <<endl;
    	}
    	else{
			ans+=(n*temp.first);
			n=0; 
       	//cout << "second\n"<<endl;
    	}
    	//cout << "ans : " << ans << endl;
    	
    	if(n==0)break;
    	
    }
    cout << ans << endl;
    
    return 0;
}

