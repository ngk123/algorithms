#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007

int main()
{
  long long int  T,n,m,q,k,ans,temp,base,ansPart,unitDig,idx,ansPart2,ansPart3;

  scanf("%lld",&T);
  while(T--)
    {
      scanf("%lld%lld%lld%lld",&n,&m,&q,&k);
      ans=m-q; 
      idx=n;
      if(n==1 ||ans<=0){printf("0\n");continue;}
      
      //printf("ans1:%lld\n",ans);
	   base=q-1;
           base=base%mod;
           temp=base;
           ansPart=1;
	   if(base==0)ansPart=0;
	   else
	     {	   
	       while(idx>0)
		 {
		   
		   unitDig=(idx)&1;
		   if(unitDig==0)
		     {
		       
		       temp=(temp*temp);
		       temp%=mod;
		     }
		   else
		     {
		       ansPart*=temp;
		       ansPart%=mod;
		       temp=(temp*temp);
		       temp%=mod;
		     }
		   idx=idx>>1;
		 }
	     }
	       /////////////

	       idx=n;
	       base=q+1;
	       base=base%mod;
	       temp=base;
	       ansPart2=1;	   
	       while(idx>0)
		 {
		   
		   unitDig=(idx)&1;
		   if(unitDig==0)
		     {
		       
		       temp=(temp*temp);
		       temp%=mod;
		     }
		   else
		     {
		       ansPart2*=temp;
		       ansPart2%=mod;
		       temp=(temp*temp);
		       temp%=mod;
		     }
		   idx=idx>>1;
		   
		 }
	       ///////////////////////////

	       idx=n;
	       base=q;
	       base=base%mod;
	       temp=base;
	       ansPart3=1;	   
	       while(idx>0)
		 {
		   
		   unitDig=(idx)&1;
		   if(unitDig==0)
		     {
		       
		       temp=(temp*temp);
		       temp%=mod;
		     }
		   else
		     {
		       ansPart3*=temp;
		       ansPart3%=mod;
		       temp=(temp*temp);
		       temp%=mod;
		     }
		   idx=idx>>1;
		   
		 }








	       //  printf("ansPart:%lld::::ansPart2:%lld:::ansPart3:%lld\n",ansPart,ansPart2,ansPart3);
               ansPart=(ansPart2+ansPart)%mod;
	       temp=(2*ansPart3)%mod;
	       ansPart=(ansPart-temp+mod)%mod;
	       ans=(ans*ansPart)%mod;
	       
	       // ans=(ans*n)%mod;
	       // ans=(ans*(n-1))%mod;
	       // ans=(ans/2)%mod;
	       // ans=(ans*2)%mod;
	       printf("%lld\n",ans);
    }
  
  
  return 0;
}
