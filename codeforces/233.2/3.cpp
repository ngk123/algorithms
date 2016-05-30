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
    int T,n,i,j,a,b,rem;
    long long int ans,part1,part2,part,temp1,temp2,temp;
    char c;
    	
    cin>>a>>b;
    
    
	
	if(b>a)
	{
	  //ans=-1*(b-a)*(b-a);
	  ans=0;  
	  part=b/(a+1);
	  rem=b%(a+1);
	  temp1=(part+1)*(part+1);
	  temp2=(part)*(part);
	  for(i=1;i<=rem;i++)
	  {
	  	ans+=temp1;	  
	  }
	  for(i=rem+1;i<=(a+1);i++)
	  {
	    ans+=temp2;
	  }
	  
	  ans=ans*-1;
	  
	  ans=ans+a;
	  
	  cout<<ans<<endl;
	  for(i=1;i<=rem;i++)
	  {
	    for(j=1;j<=(part+1);j++)
	    {
	      printf("x");
	    }	  
	    printf("o");
	  }
	  
	  
	  for(i=rem+1;i<=a;i++)
	  {
	    for(j=1;j<=(part);j++)
	    {
	      printf("x");
	    }	  
	    printf("o");
	  }
	  
	  for(j=1;j<=(part);j++)
	    {
	      printf("x");
	    }
	  
	  
	
	}
	
	 else
	 {
	   if(b%2==1)
	   {
  		   part1=(b/2)+1;   
  		   part2=(b/2);
  		   
	   }
	   else
	   {
			part2=part1=(b/2);
	   }
	    ans=(a*a)-(part1*part1)-(part2*part2);
	    cout<<ans<<endl;
	   
	   for(i=1;i<=part1;i++)
	   {
	     printf("x");
	   }
	   for(i=1;i<=a;i++)
	   {
	     printf("o");
	   }
	   
	   for(i=1;i<=part2;i++)
	   {
	     printf("x");
	   }
	 
	 }
	
  printf("\n");	 
	 
	return 0;
}

