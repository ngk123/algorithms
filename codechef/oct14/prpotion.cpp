#include<bits/stdc++.h>
using namespace std;

int max3(int a,int b,int c)
{
	return max(max(a,b),c);
}


int main()
{
	int t,R,G,B,M,rmax,gmax,bmax,maxc,maxId,a,l[4],i,j,minc;
	//ios_base::sync_with_stdio(0);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&R,&G,&B,&M);
		rmax=-1;
		for(i=0;i<R;i++)
		{
			scanf("%d",&a);
			if(a>rmax)rmax=a;
		}
		gmax=-1;
		for(i=0;i<G;i++)
		{
			scanf("%d",&a);
			if(a>gmax)gmax=a;
		}
		bmax=-1;
		for(i=0;i<B;i++)
		{
			scanf("%d",&a);
			if(a>bmax)bmax=a;
		}
		l[0]=rmax;
		l[1]=gmax;
		l[2]=bmax;		
		//cout << l[0] << " "<<l[1] << " "<< l[2] << endl;
		//cout << "Hiii\n";
		minc=l[0];
		for(i=1;i<3;i++)
		{		
	 		if(l[i]>minc)
			{
				minc=l[i];
			}
		}
		for(i=0;i<M;i++)
		{
			maxc=l[0];
			maxId=0;
						
			for(j=1;j<3;j++)
			{
				if(l[j]>maxc)
				{
					maxc=l[j];
					maxId=j;
				}
			}			
			l[maxId]=l[maxId]/2;			
			for(j=0;j<3;j++)
			{
				if(j!=maxId)
				{
					l[j]=l[j]+1;
				}
			}	
			
			maxc=l[0];
			for(j=1;j<3;j++)
			{
				if(maxc<l[j])maxc=l[j];
			}
			
			if(maxc<minc)
			{
				minc=maxc;
			}						
		}
	
		printf("%d\n",minc);					
	}	
	return 0;
}

