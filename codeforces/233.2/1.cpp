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
    int T,n,i,j,p,k,right,left;
    
    cin>>n>>p>>k;
       
     left=max(1,p-k);
     right=min(n,p+k);  
     
    if(p>n)
    {
    
    
    }
    else if(left==1)
    {
    
    	for(i=left;i<p;i++)
    	{
           printf("%d ",i);
    	}
    	
    	printf("(%d) ",p);
    	
    	for(i=p+1;i<=(right-1);i++)
    	{
    		printf("%d ",i);    	  
    	}
    	
    	
    	if(right==n)
    	{
    	   printf("%d",n);
    	}
    	else
    	{
    	   printf("%d >>",right);
    	
    	}
    	
    
    }
    else if(left>1)
    {
         printf("<< ");
    	for(i=left;i<p;i++)
    	{
           printf("%d ",i);
    	}
    	
    	printf("(%d) ",p);
    	
    	for(i=p+1;i<=(right-1);i++)
    	{
    		printf("%d ",i);    	  
    	}
    	
    	
    	if(right==n)
    	{
    	   printf("%d",n);
    	}
    	else
    	{
    	   printf("%d >>",right);
    	
    	}
    	
     
    
    }
     
    printf("\n");
    
    	
	 
	return 0;
}

