#include<stdio.h>
#include<stdlib.h>


int main()
{
  int T,R,C,i,j,k;
  int in[500][500],left[500][500],right[500][500],up[500][500],down[500][500],ans,min1,min2,min;


  int primesLess[501]={0,0, 1,   2,   2,   3,   3,   4,   4,   4,   4,   5,   5,   6,   6,   6,   6,   7,   7,   8,   8,   8,   8,   9,   9,   9,   9,   9,   9,  10,  10,  11,  11,  11,  11,  11,  11,  12,  12,  12,  12,  13,  13,  14,  14,  14,  14,  15,  15,  15,  15,  15,  15,  16,  16,  16,  16,  16,  16,  17,  17,  18,  18,  18,  18,  18,  18,  19,  19,  19,  19,  20,  20,  21,  21,  21,  21,  21,  21,  22,  22,  22,  22,  23,  23,  23,  23,  23,  23,  24,  24,  24,  24,  24,  24,  24,  24,  25,  25,  25,  25,  26,  26,  27,  27,  27,  27,  28,  28,  29,  29,  29,  29,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  30,  31,  31,  31,  31,  32,  32,  32,  32,  32,  32,  33,  33,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  35,  35,  36,  36,  36,  36,  36,  36,  37,  37,  37,  37,  37,  37,  38,  38,  38,  38,  39,  39,  39,  39,  39,  39,  40,  40,  40,  40,  40,  40,  41,  41,  42,  42,  42,  42,  42,  42,  42,  42,  42,  42,  43,  43,  44,  44,  44,  44,  45,  45,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  46,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  47,  48,  48,  48,  48,  49,  49,  50,  50,  50,  50,  51,  51,  51,  51,  51,  51,  52,  52,  53,  53,  53,  53,  53,  53,  53,  53,  53,  53,  54,  54,  54,  54,  54,  54,  55,  55,  55,  55,  55,  55,  56,  56,  56,  56,  56,  56,  57,  57,  58,  58,  58,  58,  58,  58,  59,  59,  59,  59,  60,  60,  61,  61,  61,  61,  61,  61,  61,  61,  61,  61,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  62,  63,  63,  63,  63,  64,  64,  65,  65,  65,  65,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  67,  67,  67,  67,  67,  67,  68,  68,  68,  68,  68,  68,  68,  68,  68,  68,  69,  69,  70,  70,  70,  70,  71,  71,  71,  71,  71,  71,  72,  72,  72,  72,  72,  72,  72,  72,  73,  73,  73,  73,  73,  73,  74,  74,  74,  74,  74,  74,  75,  75,  75,  75,  76,  76,  76,  76,  76,  76,  77,  77,  77,  77,  77,  77,  77,  77,  78,  78,  78,  78,  79,  79,  79,  79,  79,  79,  79,  79,  80,  80,  80,  80,  80,  80,  80,  80,  80,  80,  81,  81,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  83,  83,  84,  84,  84,  84,  84,  84,  85,  85,  85,  85,  86,  86,  86,  86,  86,  86,  87,  87,  87,  87,  87,  87,  87,  87,  88,  88,  88,  88,  89,  89,  90,  90,  90,  90,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  91,  92,  92,  92,  92,  92,  92,  92,  92,  93,  93,  93,  93,  94,  94,  94,  94,  94,  94,  94,  94,  95,  95,  95};





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


	      if(min-1 >=2)
		{
		  
		  ans+=primesLess[min-1];
		}
	    }

	}
      

      printf("%d\n",ans);
      
      
    }
  
  return 0;
}
