#include<stdio.h>
#include<stdlib.h>


int main()
{
  int T,ans,x1,x2,x3,x4,y1,y2,y3,y4,xa,xb,xc,xd,ya,yb,yc,yd,l1,l2,m1,m2;

  scanf("%d",&T);

  while(T--)
    {
      ans=0;
      scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
  
      

      ans+=(xb-xa)*(yb-ya);
      // printf("1.:%d\n",ans);
 


      x1=xa;
      x2=xb;
      y1=yb;
      y2=ya;
     
   


      scanf("%d%d%d%d",&xc,&yc,&xd,&yd);

      ans+=(xd-xc)*(yd-yc);

      x3=xc;
      x4=xd;
      y4=yc;
      y3=yd;


      /*
      // printf("2.:%d\n",ans);
      if(x3<=x2 && y3>=y2 && x3>=x1 && y1>=y3)
	{
	  //  printf("1.\n");
	  ans-=(x2-x3)*(y2-y3);
	}
      
      if(x3<=x2 && y4<=y1 && x3>=x1 && y4>=y2)
	{
	  //	  printf("2.\n");
	  ans-=(x2-x3)*(y1-y4);
	}

       if(x1<=x4 && y4<=y1 && x2>=x4 && y4>=y2)
	{
	  // printf("3.\n");
	  ans-=(x4-x1)*(y1-y4);
	}


      if(x1<=x4 && y3>=y2 && x2>=x4 && y1>=y3)
	{
	  // printf("4.\n");
	  ans-=(x4-x1)*(y3-y2);
	}

      if(x3>=x1 && x4<=x2 && y1>=y3 && y4>=y2 )
	{
	  ans-=(x4-x3)*(y3-y4);
	}

      if(x3<=x1 && x4>=x2 && y1<=y3 && y4<=y2 )
	{
	  ans-=(x2-x1)*(y1-y2);
	}
      
      
      if(x3>=x1 && x2>=x4 && y1>=y4 && y3>=y1)
	{
	  ans-=(x4-x3)*(y1-y4);
	}
      
      
      if(x3>=x1 && x2>=x4 && y2>=y4 && y3>=y2)
	{
	  ans-=(x4-x3)*(y2-y3);
	}
      
      if(x4>=x1 && x1>=x3 && y1>=y3 && y4>=y2)
	{
	  ans-=(x4-x1)*(y3-y4);
	}
      
      
      if(x2>=x3 && x4>=x2 && y1>=y3 && y4>=y2)
	{
	  ans-=(x2-x3)*(y3-y4);
	}
 
      
      */


      if(x1>=x3)
	{
	  l1=x1;	  
	}
      else 
	{

	  l1=x3;
	}


      if(x4>=x2)
	{
	  l2=x2;	  
	}
      else 
	{

	  l2=x4;
	}

      if(y1>=y3)
	{

	  m1=y3;

	}
      else
	{

	  m1=y1;

	}


      if(y2>=y4)
	{

	  m2=y2;
	}
      else
	{

	  m2=y4;
	}



      if(l1-l2>0 && m1-m2>0)
	{


	  ans-=(l1-l2)*(m1-m2);
	}


      printf("%d\n",ans);
      

    }  


  
  
  
  return 0;
}

