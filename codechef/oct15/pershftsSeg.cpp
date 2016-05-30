#include<bits/stdc++.h>
using namespace std;
#define  mod 1000000007
#define MAX (1<<18)-1
#define N 100004
typedef long long int lli;
int pSeg[MAX];
int qSeg[MAX];
lli fact[N];	
	
lli countInvP(int segIdx, int L, int R , int l, int r); 
void addSegP(int segIdx,int L,int R, int id);
lli countInvQ(int segIdx, int L, int R , int l, int r); 
void addSegQ(int segIdx,int L,int R, int id);
void calFact();	
lli fastPower(int base, int power);

int main()
{
	int t,n,k,i,j,fId;
	lli invP,invQ,rank,invT,modInv2;
	int p[N],q[N];
	int idx[N];
	cin >> t;	
	calFact();	
	
	modInv2=fastPower(2, 1000000005);

	while(t--)
	{
		cin >> n >> k;
		for(i=0;i<n;i++)
		{	
			scanf("%d",&p[i]);				
		}	
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&q[i]);
			idx[q[i]]=i;			
		}		
		
		if(k==n)
		{
			fId=idx[p[0]];		
			for(i=1;i<n;i++)
			{
				if(p[i]!=q[(fId+i)%n])
				{
					break;
				}		
			}		
			if(i!=n)
			{
				printf("-1\n");			
			}
			else
			{
				printf("%d\n",q[0]);
			}
			continue;		
		}
		
		rank=0;
		memset(pSeg,0,sizeof(pSeg));
		memset(qSeg,0,sizeof(qSeg));
		if(k%2==1)
		{		
			
			invP=invQ=0;
			for(j=n-1;j>=0;j--)
			{			
				
				invP+=countInvP(0,0,N,0,p[j]-1);				
				//cout << "count Success\n" ;			
				addSegP(0,0,N,p[j]);										
			}				
			//cout << "Inversion Count of P : " << invP << endl;
			for(j=n-1;j>=0;j--)
			{							
				invT=countInvQ(0,0,N,0,q[j]-1);
				invQ+=invT;					
				//cout << "count Success\n" ;	
				
				rank=rank+(invT*fact[n-1-j])%mod;
				rank=rank%mod;			
				addSegQ(0,0,N,q[j]);										
			}				
			if((invP%2)==(invQ%2))
			{	
				rank++;
				rank %= mod;		        
		        if (q[n - 2] < q[n - 1])    rank++;		        
		        rank %= mod;
		        rank *= modInv2;
		        rank %= mod;
				printf("%lld\n",rank);	
			}
			else
			{
				printf("-1\n");				
			}		
		}
		else
		{
			
			for(j=n-1;j>=0;j--)
			{						
				invT=countInvQ(0,0,N,0,q[j]-1);					
				rank=rank+(invT*fact[n-1-j])%mod;
				rank=rank%mod;			
				addSegQ(0,0,N,q[j]);										
			}
			rank=(rank+1)%mod;
			printf("%lld\n",rank);	
			
									
		}
	}
	return 0;
}


void addSegP(int segIdx,int L,int R, int id)
{
	int mid;
	if(id>R || id<L || L>R) return;	
	
	if(L==R) { if(L==id)pSeg[segIdx]+=1;	return;}
	if(id<=R && id>=L) pSeg[segIdx]+=1;	

	mid=(L+R)/2;
	addSegP(2*segIdx+1,L,mid,id);
	addSegP(2*segIdx+2,mid+1,R,id);
	return ;
}


lli countInvP(int segIdx, int L, int R , int l, int r)
{
	int mid;
	//cout << "yo \n";
	if(R<l || L>r || L>R)
	{
		return 0;
	}
	else if (L>=l && R<=r )
	{
		return (lli)pSeg[segIdx];	
	}
	else
	{
		mid=(L+R)/2 ;
		return countInvP(2*segIdx+1,L,mid,l,r)+countInvP(2*segIdx+2,mid+1,R,l,r);
	}	
}



void addSegQ(int segIdx,int L,int R, int id)
{
	int mid;
	if(id>R || id<L || L>R) return;	
	
	if(L==R) { if(L==id)qSeg[segIdx]+=1;	return;}
	if(id<=R && id>=L) qSeg[segIdx]+=1;	

	mid=(L+R)/2;
	addSegQ(2*segIdx+1,L,mid,id);
	addSegQ(2*segIdx+2,mid+1,R,id);
	return ;
}


lli countInvQ(int segIdx, int L, int R , int l, int r)
{
	int mid;
	//cout << "yo \n";
	if(R<l || L>r || L>R)
	{
		return 0;
	}
	else if (L>=l && R<=r )
	{
		return (lli)qSeg[segIdx];	
	}
	else
	{
		mid=(L+R)/2 ;
		return countInvQ(2*segIdx+1,L,mid,l,r)+countInvQ(2*segIdx+2,mid+1,R,l,r);
	}	
}

void calFact()
{
	int i;
	fact[0]=1;	
	for(i=1;i<N;i++)
	{
		fact[i]=(fact[i-1]*i)%mod;
	}
	return ;
}

lli fastPower(int base, int power)
{	
	lli ans,temp;
	int dig;
	ans=1;		
	temp=base;		
	while(power>0)
	{
		dig=power & 1;
		if(dig & 1 ==1)
		{
			ans=(ans*temp)%mod;
		}
		temp=(temp*temp)%mod;
		power=power/2;	
	}	
	return ans;	
}




