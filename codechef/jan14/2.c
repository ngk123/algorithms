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
  
  return (  (*(comp*)e).end- (*(comp*)f).end );
}


int main()
{
  int T,N,K,l,m,o,ans,i,j,temp,maxend,s,k,count;
  comp og[100006],process[100006];
  T=read();
  while(T--)
    {
      N=read();
      K=read();
      cnt=0;
      og[s].st=read();og[s].end=read();og[s].compno=read();
      og[s].flag=1;
      cnt++;
      s++;

      while(1)
	{
	  while(1)
	    {
	      og[s].st=read();og[s].end=read();og[s].compno=read();
	      og[s].flag=1;
	      s++;
	      cnt++;
	      if(og[s].compno>og[s-1].compno)
		{









		}
	    }

	}
    }
  return 0;
}
