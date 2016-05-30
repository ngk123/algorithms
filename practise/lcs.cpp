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
#include <string>

using namespace std;

int lcs(int t,string str1,string str2, int len1, int len2)
{
	int lcsTemp[len1+1][len2+1];
	int i,j,idx;
	int count=0;
	string answer[1002];
	int idx1[1002],idx2[1002];

	for(i=0;i<=len1;i++)
	{
		for(j=0;j<=len2;j++)
		{
			if(i==0||j==0)
			{
				lcsTemp[i][j]=0;		
			}
			
			else if(str1[i-1]==str2[j-1])
			{
				lcsTemp[i][j]=lcsTemp[i-1][j-1]+1;
			    if(lcsTemp[i][j]>count)
			    {
			    	    
			    	answer[count]=str1[i-1];
			    	idx1[count]=i;
			    	idx2[count]=j;
			    			    	
    			   	count++;
			    }	
							
			}
			
			else 
			{
				lcsTemp[i][j]=max(lcsTemp[i-1][j],lcsTemp[i][j-1]);
			}
		
		}

	}
	
	if(count<2)
	{
		cout<<"case "<<t<<" N"<<endl;
	
	}
	else
	{
		cout<<"case "<<t<<" Y"<<endl;
	    cout<<count<<endl;
	    for(i=0;i<count;i++)
	    {
	    cout<<answer[i]<<" "<<idx1[i]<<" "<<idx2[i]<<endl;
	    
	    }
	
	}
	
	
	return lcsTemp[len1][len2];

}


int main ()
{
    int T,n,k,i,j,len1,len2,ans;	
    
    cin>>T;
    
    for(k=0;k<T;k++)
    {
    string str1, str2;
	cin>>len1>>str1>>len2>>str2;
	
	//len1=str1.size();
	//len2=str2.size();
	//cout<<"len1:"<<len1<<"  len2:"<<len2<<endl;
	
	ans=lcs(k+1,str1, str2, len1, len2) ;
   	
//	cout<<"lcs  :"<<ans<<endl;
	
	}
	
	return 0;
}

