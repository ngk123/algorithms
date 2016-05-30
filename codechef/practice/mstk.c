#include<stdio.h>
#include<stdlib.h>


void constructMinTree(int idx,int start, int end);
void constructMaxTree(int idx,int start, int end);
int maxQuery(int idx,int start,int end,int L,int R);
int minQuery(int idx,int start,int end,int L,int R);


int b[100001],minTree[400004],maxTree[400004];

int main()
{

  int N,i,Q,L,R,max,min,maxRight,maxLeft,max2;
  maxLeft=-1;
  maxRight=-1;
  float ans,ans2;
  scanf("%d",&N);
  for(i=0;i<N;i++)
    {
      scanf("%d",&b[i]);
    }

  constructMaxTree(1,0,N-1);
  constructMinTree(1,0,N-1);
  /* printf("************\n");

   for(i=1;i<(2*N+20);i++)
    {
      printf("%d ",maxTree[i]);
    }
  putchar('\n');
  */
  scanf("%d",&Q);
  while(Q--)
    {
      scanf("%d%d",&L,&R);
      max=maxQuery(1,0,N-1,L,R);
      min=minQuery(1,0,N-1,L,R);
      if(L>0)maxLeft=maxQuery(1,0,N-1,0,L-1);
      if(R<N-1)maxRight=maxQuery(1,0,N-1,R+1,N-1);

      ans=((float)max+min)/2;

      if(L>0 && R<N-1)
	{
	  max2=(maxLeft>maxRight)?maxLeft:maxRight;
	  ans2=(float)min+max2;
	  ans=(ans>ans2)?ans:ans2;
	}
      else if(L>0)
	{
	  ans2=(float)min+maxLeft;
	  ans=(ans>ans2)?ans:ans2;
	}
      else if(R<N-1)
	{
	  ans2=(float)min+maxRight;
	  ans=(ans>ans2)?ans:ans2;
	}

      

      printf("%.1f\n",ans);
      //    printf("max:%d\tmin:%d\n",max,min);
    }
  return 0;
}


int maxQuery(int idx,int start,int end,int L,int R)
{

  int ans,left,right,mid;

  if(start>R || end<L)
    {
      return -1;
    }

  if(start>=L && end<=R)
    {
      return maxTree[idx];
    }
  
  if(start==end)
    {
      return maxTree[idx];
    }

  mid=(start+end)/2;
  left= maxQuery(2*idx,start,mid,L,R);
  right= maxQuery(2*idx+1,mid+1,end,L,R);
  
  ans=(left>right)?left:right;
  return ans;
}



int minQuery(int idx,int start,int end,int L,int R)
{

  int ans,left,right,mid;

  if(start>R || end<L)
    {
      return 1000000001;
    }

  if(start>=L && end<=R)
    {
      return minTree[idx];
    }
  
  if(start==end)
    {
      return minTree[idx];
    }

  mid=(start+end)/2;
  left= minQuery(2*idx,start,mid,L,R);
  right= minQuery(2*idx+1,mid+1,end,L,R);
  
  ans=(left<right)?left:right;
  return ans;
}
















void constructMaxTree(int idx,int start, int end)
{

  int mid;
  if(start==end)
    {
      maxTree[idx]=b[start];
      return;
    }
  mid=(start+end)/2;
  constructMaxTree(2*idx,start,mid);
  constructMaxTree(2*idx+1,mid+1,end);
  maxTree[idx]=(maxTree[2*idx]>maxTree[2*idx+1])? maxTree[2*idx]:maxTree[2*idx+1];
  
  return;
}




void constructMinTree(int idx,int start, int end)
{

  int mid;
  if(start==end)
    {
      minTree[idx]=b[start];
      return;
    }
  mid=(start+end)/2;
  constructMinTree(2*idx,start,mid);
  constructMinTree(2*idx+1,mid+1,end);
  minTree[idx]=(minTree[2*idx]<minTree[2*idx+1])? minTree[2*idx]:minTree[2*idx+1];
  
  return;
}





