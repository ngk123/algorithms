#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
void recur(int idx,int temp[],int M);
int temp[20];
int maxx=1,cnt;
int graph[20][20]={0};
int main ()
{
    int T,n,i,j,N,M,flag,st,k,num,max,count;
    int stamp[20][20000]={0};
    cin>>N>>M;
    for(i=0;i<M;i++)
    {
    	cin>>num;
    	   	
    	for(j=0;j<num;j++)
    	{
    		cin>>st;
    		stamp[i][st-1]=1;   	
    	}
       	   
    }
    
    
    for(i=0;i<M;i++)
    {
    	for(j=i+1;j<M;j++)
    	{
    		flag=0;
     		for(k=0;k<N;k++)
    		{
    			if((stamp[i][k]&stamp[j][k] )==1)
    			{
    				flag=1;
    				break;    			
	  			}
    		}	
    		if(flag==1)
    		{
    			graph[i][j]=1;
    			graph[j][i]=1;
    		}
    	}
    }
	recur(0,temp,M);
  	cout<<maxx<<endl;
	return 0;
}

void recur(int idx,int temp[],int M)
{
	int i,j;
 	if(idx==M)
	{
		cnt=0;
		int flag=0;
		for(i=0;i<M;i++)
		{
		    if(temp[i]==1)
		    {
		    	cnt++;
				for(j=0;j<M;j++)
				{
					if(j!=i && temp[j]==1 )
					{
						if(graph[i][j]==1)			
						{
							flag=1;
							break;
						}
					}			
				}		
			}
			if(flag==1)break;
		}	
		if(flag==0)
		{
			maxx=max(cnt,maxx);			
		} 
		return;
	}
	temp[idx]=0;
	recur(idx+1,temp,M);
	temp[idx]=1;
	recur(idx+1,temp,M);
}

