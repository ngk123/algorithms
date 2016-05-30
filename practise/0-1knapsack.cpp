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

int knapsack(int W,int wt[],int val[], int n)
{
	int tempAns[n+1][W+1],i,j;
	for(j=0;j<=W;j++)
	{
		tempAns[0][j]=0;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=W;j++)
		{
		
			if(wt[i]>j)
			{
				tempAns[i][j]=tempAns[i-1][j];			
			}	
		
		    else
		    {
			    tempAns[i][j]=max(tempAns[i-1][j],tempAns[i-1][j-wt[i]]+val[i]);
			       
		    }		
		}	
	}


	return tempAns[n][W];

}




int main ()
{
    int T,n,i,j,ans;	
    int wt[1000],val[1000],W;
    
    cin>>T;
    
    while(T--)
    {
        cin>>n;
        
    	for(i=0;i<n;i++)
    	{
    		cin>>wt[i];  	
    	}
    
    	
    	for(i=0;i<n;i++)
    	{
    		cin>>val[i];  	
    	}
    	
    	cin>>W;
    	
    	ans=knapsack(W,wt,val,n);
    	
    	cout<<ans<<endl;
    
    }
	 
	 
	return 0;
}

