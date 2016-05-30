#include<stdio.h>
#include<stdlib.h>


int read()
{
  int d=0;

  char c;
c=getchar();
  while(c>='0' && c<='9')
    {
      d=(d<<3)+(d<<1)+c-'0';
      c=getchar();
    }
  return d;
}




int main()
{
  int T,N,sum,j,i,a[100],p[101],idx,o,threshold;

  float prob[10001],ans;
  //scanf("%d",&T);
  T=read();
  while(T--)
    {

      sum=0;
      // scanf("%d",&N);
      //
       N=read();
       //getchar();
       printf("%d",N);
       prob[0]=1;
       
       for(j=1;j<=10000;j++)
	 {
	   prob[j]=0;

	}
     

      for(j=0;j<N;j++)
	{
	  scanf("%d",&a[j]);
	  sum+=a[j];
	} 
 
      if(sum%2==0)
	{
	   threshold=sum/2;
	}
      else
	{

	  threshold=sum/2+1;
	}

      for(j=0;j<N;j++)
	{

	  scanf("%d",&p[j]);
	  // prob[0]=prob[0]*(100-p[j])/100; 

	}  

      //printf("%f\n",prob[0]);
      for(j=0;j<N;j++)
	{
          for(o=10000;o>=1;o--)
	    { 
	      idx=o-a[j];
	      if(idx>=0)
		{
		  prob[o]=prob[o]*(100-p[j])/100+prob[idx]*p[j]/100;
		}
	      else
		{
		  prob[o]=prob[o]*(100-p[j])/100;
		  
		}
	      //if(idx==0)break;
	       /* if(prob[o]>0 && idx<=10000)
		{
		printf("idx:%d\n",idx); 
		prob[idx]=prob[idx]+(prob[o]/(100-p[j]))*p[j];
		}*/
	    }   
	  if(j==0)
	    {
	      // printf("p[0]=%d\n",p[j]);
	      prob[0]=(float)(100-p[j])/100;
	    }
	  else
	    {
	      prob[0]=prob[0]*(100-p[j])/100;
	      
	    }
   
	  // printf("%f--- %f----%f\n",prob[0],prob[5],prob[10]);
          
	  /*idx=0+a[j];
	  printf("idx:%d\n",idx); 
	  prob[idx]=prob[idx]+(prob[o]/(100-p[j]))*p[j];
	  printf("*********\n");
	  */
	}
      //printf("%f--- %f----%f\n",prob[0],prob[5],prob[10]);
      ans=0;    
      
      //  printf("Threshold : %d\n",threshold);

      for(j=threshold;j<=10000;j++)
	{
	  ans+=prob[j];
	}

      printf("%f\n",ans);


    }
  
  return 0;
}
