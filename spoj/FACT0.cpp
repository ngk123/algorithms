#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>

using namespace std;

typedef unsigned long long ull;

int main()
{
	ull a ;
    
    while(cin>>a)
    {
        ull i=2;
        int cnt;
    	if(a==0)break;
    	while(i*i<=a)
    	{
    			
    		if(a%i==0)
    		{
    			cnt=0;
    			while(a%i==0)
    			{
    				cnt++;    			
    				a/=i;
    			}
    			
    			printf("%lld^%d ",i,cnt);
    		    		
    		}    	
    		
    		if(a==1)break;
    		++i;
    	}  	
    	
       if(a>1)printf("%llu^1",a);
       printf("\n");    
    
    }
	return 0;
}
