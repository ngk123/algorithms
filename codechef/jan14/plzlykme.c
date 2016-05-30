#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int  power(double L,double S,double a,int b);

int main()
{
  double T,L,S,C,temp,res;
  int D;
  scanf("%lf",&T);
  while(T--)
    {
      scanf("%lf%d%lf%lf",&L,&D,&S,&C);
      temp= power(L,S,C+1,D-1);
      // res=temp*S;
      // printf("%lld\n",temp);
      if(temp==1)
	{
	  printf("ALIVE AND KICKING\n");
	}
      else
	{
	  printf("DEAD AND ROTTING\n");
	}
    }
  return 0;
}



int power(double L,double S,double a,int b)
{
  double tres,res,temp,base;
  base=a;

  /* if(b==0){res=1; return res;} 

  temp = power(a,b/2);

  if(!(b&1))return temp*temp;
  else
    return a*temp*temp;
  */

  if(b==0){res=S; if(res>=L)return 1;else return 0;}
  tres=1;
  while(b!=0)
    {
      if(b & 1)tres*=base;
      res=tres*S;
      if(res>=L)return 1;
      b>>=1;
      base*=base;
    } 
  return 0;


 
}
