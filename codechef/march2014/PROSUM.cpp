#include <iostream>
#include <cstdio>



using namespace std;


int main ()
{
    long long int T,n,i,j,num;
    long long int ans,count,count2;
    scanf("%lld",&T);
    while(T--)
    {
    	scanf("%lld",&n);
    	count=0;
    	count2=0;
    	for(i=0;i<n;i++)
    	{
    		scanf("%lld",&num);
    		
    		if(num!=1 && num!=0)
    		{
    			count++;    		
    		}	
    		
    		if(num==2)count2++;
    		    	
    	}
    	
    	
    	
    	if(count==0 || count==1)
    	{
    		ans=0;
    	}
    	else
    	{
    	ans=((count)*(count-1))/2;
/*    		if(count&1==1)
    		{
    			ans=(count-1)/2;
    			ans=ans*count;
    		}
    		else
    		{
    			ans=(count)/2;
    			ans=ans*(count-1);
    		
    		}*/
    		
      ans-=(count2* (count2-1))/2;
    		    	   		
    	}
      printf("%lld\n",ans);
        
    }	
    
	 
	return 0;
}

