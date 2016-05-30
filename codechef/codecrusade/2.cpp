#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>

using namespace std;


int main ()
{
    int T,n,i,j,L;	
    long long int  temp,temp2;
    
    long long int  ans[105]={0};
	cin>>T;
	
	ans[0]=1;
	ans[1]=0;
	ans[2]=0;
	ans[3]=0;
	ans[4]=3;
	 for(i=4;i<=100;i=i+4 )
	  {
	     ans[i]=ans[i-4]*3;
	     for(j=i-8;j>=0;)
	     {
	       ans[i]+=ans[j]*2;
	       j=j-4;	     
	     } 
	  
	  }
	
	while(T--)
	{
	  cin>>L;

	    
    printf("%lld\n",ans[L]);
	  
	   
	  
	
	}
	
	return 0;
}

