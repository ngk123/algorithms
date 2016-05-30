#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007
int main()
{
  long long int final,temp,j,k,l,i,count,tempCnt,count1,count2,count3,base1,base2,base3,tempf,p,base,a1,a2,a3;
  long long int T,upper,d,N,m,o;
  scanf("%lld",&T);
  for(o=0;o<T;o++)
    {
      //printf("m=%d\n",m);
      count=0;
      
      scanf("%lld%lld%lld%lld",&upper,&d,&m,&N); 
      for(i=0;i<N;i++)
	for(j=i;j<N;j++)
	  for(k=j;k<N;k++)
	    {
              a1=1;
	      a2=1;
	      a3=1;
	      temp=d;
	      base1=i;
              base2=j;
	      base3=k; 
	      while(temp>0)
		{
		  if(temp&1)
		    {
		      a1=(a1*base1)%N;
		      //a1=a1%N;
                      a2=(a2*base2)%N;
                      //a2=a2%N;
		  a3=(a3*base3)%N;
		      //a3=a3%N;                              
		    }
		  temp=temp>>1;
		  base1=(base1*base1)%N;
		  //base1=base1%N;
		  base2=(base2*base2)%N;
		  //base2=base2%N;
		  base3=(base3*base3)%N;
		  //base3=base3%N;
		  
		}
              if(d==0)
		{
		  a1=1;
		  a2=1;
		  a3=1;
		}
	      if(d>0 && i==0)
		{
                  a1=0;
		}
	      if(d>0 && j==0)
		{
		  a2=0;
		}
	      if(d>0 && k==0)
		{
		  a3=0;
		}

	      tempf=(a1+a2)%N;
              tempf=(tempf+a3)%N;

              if(tempf==m)
		{
		  // printf("%ld,%ld,%ld\n",i,j,k);
		  if(i==j && j==k && i<=upper && j<=upper && k<=upper)
		   {
		      count1=(1+(upper-i)/N)%mod;
                      count2=(1+(upper-j)/N)%mod;
		      count3=(1+(upper-k)/N)%mod;
                      
                      tempCnt=(count1*count2)%mod;
                      tempCnt=(tempCnt*count3)%mod;
		      count=(count+tempCnt)%mod;
		    }
		    else if((i==j || j==k || i==k) && i<=upper && j<=upper && k<=upper )
		    {
		      count1=(1+(upper-i)/N)%mod;
                      count2=(1+(upper-j)/N)%mod;
		      count3=(1+(upper-k)/N)%mod;
                      tempCnt=(count1*count2)%mod;
                      tempCnt=(tempCnt*count3)%mod;
		      tempCnt=(tempCnt*3)%mod;
		      count=(count+tempCnt)%mod;
		     

		    }
		  else if(i<=upper && j<=upper && k<=upper)
		    {
		      count1=(1+(upper-i)/N)%mod;
                      count2=(1+(upper-j)/N)%mod;
		      count3=(1+(upper-k)/N)%mod;
                      tempCnt=(count1*count2)%mod;
                      tempCnt=(tempCnt*count3)%mod;
		      tempCnt=(tempCnt*6)%mod;
                      count=(count+tempCnt)%mod;
		    }
		  
		}
	      
	      
	    }
      count=count%mod;
      printf("%lld\n",count);

      // printf("m=%d\n",m);
    }
      
      

  return 0;
}
