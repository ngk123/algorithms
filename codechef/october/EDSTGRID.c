#include<stdio.h>
#include<stdlib.h>
 int ans[1000001][5];
int main()
{
  int T,N,M,C2,C3,i,l,j,k,mid,count;

  char str[100][100];

  scanf("%d",&T);
  while(T--)
    {
      scanf("%d%d%d%d",&N,&M,&C2,&C3);
      count=0;
      
      for(i=0;i<N;i++)
	{
	  scanf("%s",str[i]);
	}
      
      for(i=0;i<N;i++)
	{
	  mid=M/2;
	  for(j=mid;j<M;j++)
	    {
	      
	      if(str[i][j]!='B')
		{
		  for(k=j;k<M;k++)
		    {
		      if(str[i][k]=='B')break;
		    }
		  if(k==M)break;
		  else
		    {
		      if(k-j >= C3){str[i][k]='W'; ans[count][0]=3;ans[count][1]=i,ans[count][2]=k; count++; }
		      else
			{
			  str[i][j]='B';
                          str[i][k]='W';
			  for(l=k;l>j;l--)
			    {
                              ans[count][0]=1;  ans[count][1]=i; ans[count][2]=l; ans[count][3]=i;ans[count][4]=l-1;
			      count++;
			      //    printf("1 %d %d %d %d\n",i,l,i,l-1);
			      
			    }
			}
		    }
		}
	      
	    }
	  
	  for(j=mid;j>=0;j--)
	    {
	      ///////////////////////////
	      if(str[i][j]!='B')
		{
		  
		  for(k=j;k>=0;k--)
		    {
		      if(str[i][k]=='B')break;
		    }
		  if(k==-1)break;
		  else
		    {
		      if(j-k >= C3){str[i][k]='W';
			ans[count][0]=3;  ans[count][1]=i; ans[count][2]=k;
			count++;
			//			printf("3 %d %d\n",i,k);
		      }
		      else
			{
			  str[i][j]='B';str[i][k]='W';
			  for(l=k;l<j;l++)
			    {
                              ans[count][0]=1;  ans[count][1]=i; ans[count][2]=l; ans[count][3]=i;ans[count][4]=l+1;
			      count++;
			      //		      printf("1 %d %d %d %d\n",i,l,i,l+1);
			    
	   
			    }
			}
		    }
		}
	      
	      ///////////////////////////
	      
	    }
	  if(str[i][mid]=='W')
	    {
	      ans[count][0]=2; 
	      ans[count][1]=i; ans[count][2]=mid;
	      count++;
	      str[i][mid]='B';
	      //printf("2 %d %d\n",i,mid);
	    }
	  
	}
      
      //   printf("\n\n\n");
      printf("%d\n",count);
      for(k=0;k<count;k++)
	{
	  if(ans[k][0]==1)
	    {
	      printf("%d %d %d %d %d\n",ans[k][0],ans[k][1]+1,ans[k][2]+1,ans[k][3]+1,ans[k][4]+1);
	    }
	  
	  else 
	    {
	      printf("%d %d %d\n",ans[k][0],ans[k][1]+1,ans[k][2]+1);
	    }
	}
      // printf("\n\n\n");
      
    }
    


return 0;
}
