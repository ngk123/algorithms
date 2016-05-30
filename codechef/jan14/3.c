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


typedef struct comp
{
  int st;
  int end;
  int compno;
  int flag;
}comp;



int cmpfunc (const void * e, const void * f)
{
  if((*(comp*)e).compno==(*(comp*)f).compno)
    {
      return (  (*(comp*)e).end- (*(comp*)f).end );
    }
  else
    {
      return (  (*(comp*)e).compno- (*(comp*)f).compno );
    }
}

int main()
{
  int T,N,K,l,m,o,ans,i,j,temp,maxend;
  comp og[100006],process[100006];
  //  scanf("%d",&T);
  T=read();
 
  while(T--)
    {
      //    scanf("%d%d",&N,&K);
      ans=0;
      N=read();
      K=read();
      for(i=0;i<N;i++)
	{
	  og[i].st=read();og[i].end=read();og[i].compno=read();
	  og[i].flag=1;
	}
      qsort(og,N,sizeof(comp),cmpfunc);
      
      if(N>0)
	{
	  maxend=og[0].end;
	  ans=1;
	}

      for(i=1;i<N;i++)
	{
	  if(og[i].st>=maxend && og[i].compno==og[i-1].compno){ans+=1;maxend=og[i].end;}
	  else if(og[i].compno!=og[i-1].compno){ans+=1;maxend=og[i].end;}

	  //
	  //  printf("%d %d %d\n",og[i].st, og[i].end,og[i].compno);
	}
      
      printf("%d\n",ans);
    }
  
  return 0;
}
