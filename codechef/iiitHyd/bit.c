#include<stdio.h>
#include<stdlib.h>

//int bitsc[]={1,4,12,32,80,202,468,508,1104,2464};
  int ans[1010];
int main()
{
  int T,N,b;
  scanf("%d",&T);
 bits();
  while(T--)
    {
      scanf("%d",&N);
     
      printf("%d\n",ans[N]);
    }
  
  return 0;
}


int bits()
{

  int i,temp,counter,temppr;
  counter=4;
  ans[0]=0;
  ans[1]=1;
  ans[2]=2;
  ans[3]=4;
 
 
  temp=4;
  temppr=3;
  temp=(temp<<1);
 
    i=2;
  while(1)
    {
      ans[counter]=(counter-temppr)+ans[temppr]+ans[counter-temppr-1];
      // printf("%d::%d\n",counter,ans[counter]);
      counter++;
      if(counter==temp){counter=temp;temppr=temp-1;temp=temp<<1;}
      if(counter==1001)break;
      
    }

}
