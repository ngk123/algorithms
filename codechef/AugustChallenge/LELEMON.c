#include<stdio.h>
#include<stdlib.h>
#define MAX 100


void partition(int arr[],int low,int high);
void mergeSort(int arr[],int low,int mid,int high);

int read()
{
  int d=0;

  char c=getchar();
  while(c>='0' && c<='9')
    {
      d=(d<<3)+(d<<1)+c-'0';
      c=getchar();
    }
  return d;
}

int main()
{
  int T,n,m,i,C,j,l,sum,r,q,k;
  int p[10000],c[100],count[100];
//   getchar();
   T=read();
   //scanf("%d",&T);

  for(i=0;i<T;i++)
    {
      sum=0;
     
      n=read();
      // printf("n=%d\n",n);

      m=read();

      //printf("m=%d\n",m);
      //scanf("%d%d",&n,&m);
      for(k=0;k<n;k++)
	{
	  count[k]=0;
	}

      for(j=0;j<m;j++)
	{
          p[j]=read();
	  //  scanf("%d",&p[j]);
          count[p[j]]+=1;
	}
      for(q=0;q<n;q++)
	{
	  C=read();
	  //scanf("%d",&C);
	  for(l=0;l<C;l++)
	    {
              c[l]=read();
	      //scanf("%d",&c[l]);
	      
	    }
	  
	  partition(c,0,C-1);  
	  
	  for(r=0;r<count[q];r++)
	    {
	      if(r<C)
	      sum+=c[C-1-r];
	    }
	  
	} 
      printf("%d\n",sum);
      
    }  
  
  
  
  
  return 0;
}

  
  void partition(int arr[],int low,int high){
    
    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}


 void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}

