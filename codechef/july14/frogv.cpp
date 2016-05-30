#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct{
int idx;
int xcord;
}rec;


bool sortF(rec a, rec b)
{
if(a.xcord < b.xcord)
return true;
else
return false;
}

int arr[100004],imp[100004];
rec a[1000004];;
int main()
{
	int N,K,P,i,L,R,cnt;
	
	scanf("%d%d%d",&N,&K,&P);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i].xcord);
		a[i].idx=i+1;
	}
	sort(a,a+N,sortF);	
	
	for(i=0;i<N;i++)
	{
		printf("%d : %d\n",a[i].idx,a[i].xcord);
	}
	
	for(i=0;i<N;i++)
	{
		arr[a[i].idx-1]=i;	
	}
	
	cnt=0;
	for(i=0;i<N-1;i++)
	{
		if(a[i+1].xcord-a[i].xcord>K)
		{
			imp[cnt]=i;
			cnt++;
		}	
		
	}	
	printf("max\n");
	for(i=0;i<cnt;i++)
	{
		printf("%d\n",imp[i]);
		
	}
	
	for(i=0;i<P;i++)
	{
		scanf("%d%d",&L,&R);	
	}
	
		
	

	return 0;
}
