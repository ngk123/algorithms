#include<stdio.h>
#include<stdlib.h>

int read()
{
  char c = 0;
  int input = 0;
  while(c < 33)
    c = getchar_unlocked();
  while(c > 33)
    {
      input = input*10+c-'0';
      c = getchar_unlocked();
    }
  return input;
}

int cmpfunc (const void * e, const void * f)
{
  return (  (*(int*)f) -(*(int*)e) );
}

int main()
{
  int T,n,m,p1,p2,temp,tempS,j,i,flag,k;
  
  T=read();

  for(k=0;k<T;k++)
    {
      int degree[101]={0};
      n=read();
      m=read();
      int cum[101]={0};
      int edges[101][101]={0};
      flag=0;
      while(m--)
	{
	  p1=read();
	  p2=read();
          if(edges[p1-1][p2-1]==0)
	    { 
	      edges[p1-1][p2-1]=1;
	      edges[p2-1][p1-1]=1;
	      degree[p1-1]+=1;
	      degree[p2-1]+=1;
	    }
	}
      
      if(n%2==1)
	{
	  printf("NO\n");
	  continue;
	}
      for(i=0;i<n;i++)
	{
	  if(degree[i]>0)
	  degree[i]-=1;
	  else
	    {
	      printf("NO\n");
	      flag=1;
	      break;
	    }
	}
      if(flag==1)continue;
      qsort(degree,n,sizeof(int),cmpfunc);
      cum[0]=degree[0];
      //  printf("cum[0]:%d\n",cum[0]);      
      for(i=1;i<n;i++)
	{
	  cum[i]=cum[i-1]+degree[i];
	}
      
      for(i=0;i<n;i++)
	{

	  temp=(i+1)*i;
	  tempS=0;
          for(j=i+1;j<n;j++)
	    {
	      if(degree[j]<(i+1))tempS+=degree[j];
	      else tempS+=(i+1);
	    }
	  temp+=tempS;
	  //	  printf("temp:%d\n,cum[i]:%d\n",temp,cum[i]);
	  if(temp<cum[i]){printf("NO\n");break;}
	}
      if(i==n)printf("YES\n");
    }
  return 0;
}
