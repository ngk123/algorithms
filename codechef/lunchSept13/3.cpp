#include<bits/stdc++.h>
using namespace std;


typedef struct triple{
int two;
int three;
int five;
}triple;


int temp,temp2;
int arr[(1<<18)+1];

triple segtree[2<<19];


int update(int segIdx,int l,int r,int ss,int es,int p)
{
	int mid;	
	if(ss>r|| es<l)
	{
		return 0;
	}	
	if(ss>=l && es <=r)
	{
		if(p==2)
		segtree[segIdx].two+=1;
		if(p==3)
		segtree[segIdx].three+=1;
		if(p==5)
		segtree[segIdx].five+=1;
		return 0;		
	}	
	else
	{
		mid=(ss+es)/2;
		return update(2*segIdx+1,l,r,ss,mid,p)+update(2*segIdx+2,l,r,mid+1,es,p);	
	}
}



int split(int segIdx,int l,int r,int ss,int es)
{

		int mid;	
	if(ss>r|| es<l)
	{
		return 0;
	}	
	if(2*segIdx+2<temp)
		{
			segtree[2*segIdx+1].two+=segtree[segIdx].two;
			segtree[2*segIdx+2].two+=segtree[segIdx].two;
		
			segtree[2*segIdx+1].three+=segtree[segIdx].three;
			segtree[2*segIdx+2].three+=segtree[segIdx].three;
		
			segtree[2*segIdx+1].five+=segtree[segIdx].five;
			segtree[2*segIdx+2].five+=segtree[segIdx].five;
		
		
			segtree[segIdx].two=0;
			segtree[segIdx].three=0;
			segtree[segIdx].five=0;
		}	
	else
	{
		return 0;
	}
	
	
	
		mid=(ss+es)/2;
		return split(2*segIdx+1,l,r,ss,mid)+split(2*segIdx+2,l,r,mid+1,es);	
	/*
	if(ss>=l && es <=r)
	{
		if(2*segIdx+2<temp)
		{
			segtree[2*segIdx+1].two+=segtree[segIdx].two;
			segtree[2*segIdx+2].two+=segtree[segIdx].two;
		
			segtree[2*segIdx+1].three+=segtree[segIdx].three;
			segtree[2*segIdx+2].three+=segtree[segIdx].three;
		
			segtree[2*segIdx+1].five+=segtree[segIdx].five;
			segtree[2*segIdx+2].five+=segtree[segIdx].five;
		
		
			segtree[segIdx].two=0;
			segtree[segIdx].three=0;
			segtree[segIdx].five=0;
		}	
	}	
	else
	{
		mid=(ss+es)/2;
		return split(2*segIdx+1,l,r,ss,mid)+split(2*segIdx+2,l,r,mid+1,es);	
	}	*/

}




int main()
{
	
	int m,l,r,n,d,j,start,end,q,i,p,k;
	
	cin >> n;
	
	
	temp=(1<<19)-1;
	temp2=(1<<18)-1;
	if(n<101)
	{
		temp=(1<<8)-1;
	    temp2=(1<<7)-1;
	
	}
	for(i=0;i<temp;i++)
	{
		segtree[i].two=0;
		segtree[i].three=0;
		segtree[i].five=0;
	}
		
	for(i=0;i<n;i++)
	cin >> arr[i];
	cin >> m;
	for(k=0;k<m;k++)
	{
			cin >> q;
			if(q==1)
			{
				cin >> l >> r >> p;
				//temp2=(1<<18)-1;
				update(0,l-1,r-1,0,temp2,p);
			}	
			else
			{
				cin >> l >> d;
				
				split(0,l-1,l-1,0,temp2);
				
				segtree[temp2+l-1].two=0;
				segtree[temp2+l-1].three=0;
			 	segtree[temp2+l-1].five=0;
				
				/*
				
				for(i=0; ;i++)
				{
					if(2*i+1>(temp+1))
					{
						break;
					}
					{
						if(segtree[i].two>0)
						{
							segtree[2*i+1].two+=segtree[i].two;
							segtree[2*i+2].two+=segtree[i].two;
						}
			
						if(segtree[i].three>0)
						{
							segtree[2*i+1].three+=segtree[i].three;
							segtree[2*i+2].three+=segtree[i].three;
						}
						if(segtree[i].five>0)
						{
							segtree[2*i+1].five+=segtree[i].five;
							segtree[2*i+2].five+=segtree[i].five;
						}
					}
				}
						
				
				
				
				
				start=(1<<18)-1;
				end=(1<<19)-1;
				j=0;	
				for(i=temp2;i<temp;i++)
				{
					while(segtree[i].two>0 && arr[j]%2==0)
					{
						arr[j]/=2;
						segtree[i].two--;
					}
					while(segtree[i].three>0 && arr[j]%3==0)
					{
						arr[j]/=3;
						segtree[i].three--;
					}
					while(segtree[i].five>0 && arr[j]%5==0)
					{
						arr[j]/=5;
						segtree[i].five--;
					}
					j++;
				}
			
				//temp=1<<19;
				for(i=0;i<temp+1;i++)
				{
					segtree[i].two=0;
					segtree[i].three=0;
					segtree[i].five=0;
				}
				
					*/
				
				
				arr[l-1]=d;
			}
						
				
	}	
	

	for(i=0; ;i++)
	{
		if(2*i+1>(temp+1))
		{
			break;
		}
		{
			if(segtree[i].two>0)
			{
				segtree[2*i+1].two+=segtree[i].two;
				segtree[2*i+2].two+=segtree[i].two;
			}
			
			if(segtree[i].three>0)
			{
				segtree[2*i+1].three+=segtree[i].three;
				segtree[2*i+2].three+=segtree[i].three;
			}
			if(segtree[i].five>0)
			{
				segtree[2*i+1].five+=segtree[i].five;
				segtree[2*i+2].five+=segtree[i].five;
			}
		}
	}
	start=(1<<18)-1;
	end=(1<<19)-1;
	j=0;
	for(i=temp2;i<temp;i++)
	{
		while(segtree[i].two>0 && arr[j]%2==0)
		{
			arr[j]/=2;
			segtree[i].two--;
		}
		while(segtree[i].three>0 && arr[j]%3==0)
		{
			arr[j]/=3;
			segtree[i].three--;
		}
		while(segtree[i].five>0 && arr[j]%5==0)
		{
			arr[j]/=5;
			segtree[i].five--;
		}
		j++;
	}

	for(i=0;i<n;i++)
	cout << arr[i] << " ";
	cout << endl;
	return 0;
}

