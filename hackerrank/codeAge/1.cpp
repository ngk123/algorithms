#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int xt,yt,xi,yi,x,y,n,i;
    
    cin >> xt >> yt;
    
    cin >> n;
    xi=xt;
    yi=yt;
    for(i=0;i<n;i++){
    	cin >> x >> y;
    	xi-=x;
    	yi-=y;
    }
    cout << xi << " "<< yi << endl;
   return 0;
}
