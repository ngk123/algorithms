#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007

int main()
{

  long int final,temp,j,k,l,i,count1,count2,tempf,count3,p,base,a1,a2,a3;
  int T,upper,d,m,N;
  scanf("%d",&T);
  for(i=0;i<T;i++)
    {


      scanf("%d%d%d%d",&upper,&d,&m,&N);
      
      final=0;
      
      for(j=0;j<N;j++)
	for(k=0;k<N;k++)
	  for(l=0;l<N;l++)
	    {
	      if((j+k+l)%N==m)
		{
		  count1=0;
		  count2=0;
		  count3=0;
		  //************************************************
		  for(p=0;p<N;p++)
		    {
                      temp=d;
                      a1=1;
		      base=p;
		      
		      while(temp>0)
			{
			  if(temp&1)
			    {
			      a1=a1*base;
			      a1=a1%N;                              
		       	    }
			  temp=temp>>1;
			  base=base*base;
			  base=base%N;
			  
			}
		      if(p==0 && d>0)a1=0;
                      a1=a1%N;
		      if((a1==j && p<=upper) ||(p<=upper && d==0 && j==1) )
			{
			  // printf("pair1:%ld\t",p);
			  count1=(count1+1+(upper-p)/N)%mod;
			  // break;
			}
		      
		      
		    }
		  //************************************************
		  
		  for(p=0;p<N;p++)
		    {
                      temp=d;
                      a1=1;
		      base=p;
		      while(temp>0)
			{
			  if(temp&1)
			    {
			      a1=a1*base;
			      a1=a1%N;                              
		       	    }
			  temp=temp>>1;
			  base=base*base;
			  base=base%N;
			  

			}
		      if(p==0 && d>0)a1=0;
		      a1=a1%N;
		      if((a1==k && p<=upper)||(d==0 && p<=upper && k==1))
			{
			  // printf("pair2:%ld\t",p);
			  count2=(count2+1+(upper-p)/N)%mod;
			  // break;
			}
		      
		      
		    }
		  //************************************************
		  
		  
		  for(p=0;p<N;p++)
		    {
                      temp=d;
                      a1=1;
		      base=p;
 		      while(temp>0)
			{
			  if(temp&1)
			    {
			      a1=a1*base;
			      a1=a1%N;                              
		       	    }
			  temp=temp>>1;
			  base=base*base;
			  base=base%N;
			  
			  
			}
		      if(p==0 && d>0)a1=0;
		      a1=a1%N;
		      if((a1==l && p<=upper) ||(d==0 && p<=upper && l==1) )
			{
			  // printf("pair3:%ld\n",p);
			  count3=(count3+1+(upper-p)/N)%mod;
			  // break;
			}
		      
		    }
		  //****************************************************
		  
		  //	  printf("%ld------%ld-----------%ld\n",count1,count2,count3);
                  count1%=1000000007;
		  count2%=1000000007;
		  count3%=1000000007;
                  tempf=count1*count2;
                  tempf=tempf%1000000007;
                  tempf=tempf*count3;
                  tempf=tempf%1000000007;
                  
		  final=(final+tempf)%mod;
		  //final=final%1000000007;
		  		  	  
		  //  printf("%5ld%5ld%5ld\n",j,k,l);
		  
		  
		}
	      

	    }
      //      printf("%ld---%ld----%ld----------final:%ld\n",count1,count2,count3,final);
	 
      printf("%ld\n",final);
    }
  
  return 0;
}
