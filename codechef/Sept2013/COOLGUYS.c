#include<stdio.h>
#include<stdlib.h>
#include<math.h>


long long int gcd(long long int ans , long long int temp);
int main()
{
  long long int T,N,ans,i,temp,div,sv;

  





  scanf("%lld",&T);

  while(T--)
    {
      ans=0;
 
      scanf("%lld",&N);
      sv=sqrt(N);     
      for(i=1;i<=sv;i++)
	{
	  ans+=(N/i);
        }
      ans=2*ans;

      ans=ans- (sv*sv);
     

      // printf("%lld\n",ans);
      temp=N*N;

      /*      for(i=N;i>1;i--)
	{

	  if(ans%i==0 && temp%i==0)
            {
	      ans=ans/i;
              temp=temp/i;

	    }


	}      
      */


      div=gcd(ans,temp);
      ans=ans/div;
      temp=temp/div;

      printf("%lld/%lld\n",ans,temp);


    }

  return 0;
}



long long int gcd(long long int ans , long long int temp)
{

  long long int temp2,rem;
  
  while(1)
    {
      if(temp%ans==0)break;   
      temp2=temp/ans;
     
      rem=temp-(temp2*ans);
      temp=ans;
      ans=rem;
      

    }




  return ans;
}
