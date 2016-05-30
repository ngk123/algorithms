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

#define max(a,b) ((a>b)?a:b)

using namespace std;


int main ()
{
    int k,n,j,type,ans,temp;	
    int idx[1000007];
    
    for (unsigned int i = 0; i < 1000007; i += 1)
    {
    	idx[i]=1000007;
    }
   	scanf("%d%d",&n,&k);
   	
   	for (unsigned int i = 0; i < n; i += 1)
   	{
   		scanf("%d",&type);
   		
   		if(idx[type]>i)
   		idx[type]=i;
   		
   		if(idx[type]>(n-i-1)) 
   		idx[type]=(n-i-1);
   	 	   		
   	}
    
    ans=2*1000007;
    
    for (unsigned int i = 1; i < 1000007; i += 1)
    { 
        if(i>k)break;
    	if(i!=k-i && idx[i]!=1000007 && idx[k-i]!=1000007)
    	{
    	 temp=max(idx[i],idx[k-i])+1;
    	 if(ans>temp)ans=temp;
    	}
    	
     }
     
     if(ans==2*1000007)ans=-1;
     printf("%d\n",ans);
   
	 
	return 0;
}


