#include<stdio.h>
#include<stdlib.h>


int main()
{
  int T,R,C,i,j,k;
  int in[50][50],left[50][50],right[50][50],up[50][50],down[50][50],ans,min1,min2,min;
  char sym;
  scanf("%d",&T);
  for(i=0;i<T;i++)
    {
      scanf("%d%d",&R,&C);
      getchar();
      for(j=0;j<R;j++)
	{
	  for(k=0;k<C;k++)
	    {
	      scanf("%c",&sym);
              if(sym=='^')in[j][k]=1;
              else in[j][k]=0;
	    }
	  //	  printf("k=%d,j=%d",k,j);
	  getchar();
	}

      //  printf("*************input*****************\n");
      /*	for(j=0;j<R;j++)
	  {
	    for(k=0;k<C;k++)
	      {
		printf("%d\t",in[j][k]);
	      }
	    printf("\n");
	  }
      */

	// printf("Left*************************\n");
      //////////left***********************************
      for(j=0;j<R;j++)
	{
          left[j][0]=in[j][0];
	  //	  printf("%d\t",left[j][0]);
	  for(k=1;k<C;k++)
	    {
	      if(left[j][k-1]==0)left[j][k]=in[j][k];
	      else if(in[j][k]==0)left[j][k]=0;
              else  left[j][k]=left[j][k-1]+1;
              
	      //  printf("%d\t",left[j][k]);
	    }
	  // printf("\n");

	}

      //  printf("Right*************************\n");
      //////////Right***********************************
      for(j=0;j<R;j++)
	{
          right[j][C-1]=in[j][C-1];
	  //  printf("%d\t",right[j][C-1]);
	  for(k=C-2;k>=0;k--)
	    {
	      if(right[j][k+1]==0)right[j][k]=in[j][k];
	      else if(in[j][k]==0)right[j][k]=0;
              else  right[j][k]=right[j][k+1]+1;
              
	      //  printf("%d\t",right[j][k]);
	    }
	  // printf("\n");

	}



      //      printf("UP*************************\n");
      //////////UP***********************************
      for(k=0;k<C;k++)
	{
          up[0][k]=in[0][k];
	  // printf("%d\t",up[0][k]);
	  for(j=1;j<R;j++)
	    {
	      if(up[j-1][k]==0)up[j][k]=in[j][k];
	      else if(in[j][k]==0)up[j][k]=0;
              else  up[j][k]=up[j-1][k]+1;
              
	      //  printf("%d\t",up[j][k]);
	    }
	  // printf("\n");

	}



      //      printf("DOWN*************************\n");
      //////////DOWN***********************************
      for(k=0;k<C;k++)
	{
          down[R-1][k]=in[R-1][k];
	  // printf("%d\t",down[R-1][k]);
	  for(j=R-2;j>=0;j--)
	    {
	      if(down[j+1][k]==0)down[j][k]=in[j][k];
	      else if(in[j][k]==0)down[j][k]=0;
              else  down[j][k]=down[j+1][k]+1;
              
	      //      printf("%d\t",down[j][k]);
	    }
	  // printf("\n");

	}

      ans=0;

      for(j=0;j<R;j++)
	{
	  for(k=0;k<C;k++)
	    {
	      if(in[j][k]==0)continue;
	      if(up[j][k]>=down[j][k])min1=down[j][k];
	      else min1=up[j][k];
              
	      if(right[j][k]>=left[j][k])min2=left[j][k];
	      else min2=right[j][k];


	      if(min1>=min2)min=min2;
	      else min=min1;


	      if(min-1 >=2)ans+=1;

	    }

	}
      

      printf("%d\n",ans);
      
      
    }
  
  return 0;
}
