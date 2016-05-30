#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vpi;
typedef long long int lli;

typedef struct valIdx
{
	int num; 
	int idx;
}valIdx;


// to store the idx involved in the swap of each query;
typedef struct ids{
int qId; // query ID
int idx; // idx in the swap
int rank; // first idx or second idx
}ids;


bool comp(valIdx a, valIdx b)
{
	return (a.num<b.num);
}

lli ans[200005]={0};
lli segLeftMore[800005]={0};
//int segLeftLess[800005]={0};
int arr2[200005];



//int addLmore(0,arr2[i],0,200005)
int addLmore(int segIdx , int val , int lE , int rE)
{
	int mid;
	if(lE>val || rE<val)
	return 1;	
	
	segLeftMore[segIdx]+=1;
	
	if(lE!=rE)
	{	
		mid=(lE+rE)/2;
		addLmore(segIdx*2+1,val,lE,mid);
		addLmore(segIdx*2+2,val,mid+1,rE);
	}
	
	return 1;
}

//lmore(0,arr2[arrId[i][j].idx]+1,200005,0,200005);

lli lmore(int segIdx, int lVal, int rVal, int lE, int rE )
{
	int mid;
	if(lE>rVal || rE<lVal ) return 0;
	
	if(lE>= lVal && rE <= rVal)
	{
		return segLeftMore[segIdx];
	}
	else
	{
		mid=(lE+rE)/2;
		return lmore(segIdx*2+1,lVal,rVal,lE,mid)+lmore(segIdx*2+2,lVal,rVal,mid+1,rE);
	}
}


int main()
{
	int n,m,temp,a,tempVal,l,r,i,j;
	map<int,int> count;
	
	ids t;
	valIdx arr[200005];
	
	vector<ids> arrId[200005]; 
	scanf("%d%d",&n,&m);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);		
		arr[i].num=a;
		arr[i].idx=i;
	}	
	

	
	for(i=0;i<m;i++)
	{
		int temp;
		scanf("%d%d",&l,&r)	;
		if(l>r) {
		temp=r;
		r=l;
		l=temp;
		}
		if(l!=r)
		{	
		t.qId=i;
		t.idx=l-1;
		t.rank=1;		
		arrId[l-1].push_back(t);
		arrId[r-1].push_back(t);
		t.idx=r-1;
		t.rank=2;
		arrId[l-1].push_back(t);
		arrId[r-1].push_back(t);		
		}
		else
		{
			ans[i]=0;
		}
	}
	
	/*
	for(i=0;i<n;i++)
	{
		int temp=arrId[i].size();
		for(j=0;j<temp;j++)
		{
			printf("query No: %d  Id :  %d   rank :%d \n" ,arrId[i][j].qId,arrId[i][j].idx,arrId[i][j].rank);
		
		}
		printf("- - - - - - - \n");
	
	}
	*/
		
	sort(arr,arr+n,comp);
	arr2[arr[0].idx]=1;
	tempVal=1;
	
	for(i=1;i<n;i++)
	{
		if(arr[i].num!=arr[i-1].num)
		{
			tempVal++;
		}
		arr2[arr[i].idx]=tempVal;
	}
		/*
	for(i=0;i<n;i++)
	{
		printf("%d   ",arr2[i]);
	}*/
	//printf("\n");	
	
	// First Segment Tree
	
	lli invCnt=0;
	
	for(i=0;i<n;i++)
	{
		//addLmore(segIdx,val,minIdx==0 ,maxIdx==200005)
		//printf("arr2[%d]:%d\n",i,arr2[i]);
		addLmore(0,arr2[i],0,n+1);	
		/*
		for(int k=0 ;k<4*n;k++)
		{
			printf("SegLeft[%d]:%d\n",k,segLeftMore[k]);
		}
		*/
		invCnt+=lmore(0,arr2[i]+1,n+1,0,n+1);
		//printf("inv :%d\n",invCnt);
		temp=arrId[i].size();
		for(j=0;j<temp;j++)
		{
			lli tVal;
			tVal=lmore(0,arr2[arrId[i][j].idx]+1,n+1,0,n+1);
			//printf("tVal: %lld\n",tVal);
			
			if(arrId[i][j].rank==1)
			{
				if(arrId[i][j].idx==i)
				{
					ans[arrId[i][j].qId]-=tVal;
				}
				else
				{
					ans[arrId[i][j].qId]+=tVal;
				}			
			}
			else
			{
				if(arrId[i][j].idx==i)
				{
					ans[arrId[i][j].qId]-=tVal;
				}
				else
				{
					ans[arrId[i][j].qId]+=tVal;
				}			
			}	
			//printf("ans : %lld\n",ans[0]);
			
			
			tVal=lmore(0,0,arr2[arrId[i][j].idx]-1,0,n+1);
			//printf("tVal: %lld\n",tVal);
			if(arrId[i][j].rank==1)
			{
				if(arrId[i][j].idx==i)
				{
					ans[arrId[i][j].qId]+=tVal;
				}
				else
				{
					ans[arrId[i][j].qId]-=tVal;
				}			
			}
			else
			{
				if(arrId[i][j].idx==i)
				{
					ans[arrId[i][j].qId]+=tVal;
				}
				else
				{
					ans[arrId[i][j].qId]-=tVal;
				}			
			}
	//									printf("ans : %lld\n",ans[0]);
		}	
		
		//printf("ans: %d \n" ,ans[0]	);
	}
	
	
	//printf("InvCount : %d\n",invCnt);
	for(i=0;i<m;i++)
	{	
	
		ans[i]+=invCnt;
		
		printf("%lld\n",ans[i]);
	}
	
	
	
	
	
	// 	Second Segment tree
	/*
	for(i=0;i<n;i++)
	{
		//addLless(segIdx,val,minIdx==0 ,maxIdx==200005)
		addLless(0,arr[i],0,200005);	
		temp=arrId[i].size();
		for(j=0;j<temp;j++)
		{
			int tVal;
		//*tVal=lless(0,0,arr2[arrId[i][j].idx]-1,0,200005);
			
			if(arrId[i][j].rank==1)
			{
				if(arrId[i][j].idx==i)
				{
					ans[arrId[i][j].qId]+=tVal;
				}
				else
				{
					ans[arrId[i][j].qId]-=tVal;
				}			
			}
			else
			{
				if(arrId[i][j].idx==i)
				{
					ans[arrId[i][j].qId]+=tVal;
				}
				else
				{
					ans[arrId[i][j].qId]-=tVal;
				}			
			}	//				
		}		
	}*/
	
	return 0;
	

}
