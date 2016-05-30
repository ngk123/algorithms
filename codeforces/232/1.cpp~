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
    int T,n,i,j,ans,li,ri,right,l,r;
    
    cin>>n;
    
    cin>>l>>r;
    int flag[101]={0};
    for(i=l;i<r;i++)
    {
    	flag[i]=1;
    }
    
    
    for(i=0;i<=n-1;i++)
    {
    	cin>>li>>ri;
	    if(li>=l && li<r)
	    {
			
			right=min(ri,r);
			
			for(j=li;j<right;j++)
			{
			  flag[j]=-1;
			}
		   
	    
	    }
	    
	    else if(ri>l && ri<=r)
	    {
	    
	    	for(j=l;j<ri;j++)
			{
			  flag[j]=-1;
			}
	    
	    }
      
      else if(li<l && ri>r)
      {
      
	      for(j=l;j<r;j++)
			{
			  flag[j]=-1;
			}
	    
       
      }
    
    }
    
    ans=0;
    for(i=l;i<r;i++)
    {
      if(flag[i]==1)ans++;
    
    }
    
    cout<<ans<<endl;
	return 0;
}

