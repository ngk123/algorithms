#include<iostream>
#include<cstdio>
#include<algorithm>
#include<utility>

#define MaxVal 1000000


using namespace std;
 int n,d[1000001],countp=0,i,t[1000001];
 long long int ans = 0;
 pair<int,int> p[100004];
 int tree[10000002] = {0};
 
 
int read(int idx)
{
	int sum = 0;
	while (idx > 0)
	{
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void update(int idx ,int val){
	while (idx <= MaxVal){
		tree[idx] += val;
		idx += (idx & -idx);
	}
}

int main()
{

 
 scanf("%d",&n);
 ans = 0;
 int k;
 for(i=0;i<n;i++)
 {
 	cin>>k;

 	int x = read(MaxVal);
 	int y = read(k);
 	ans = ans+x-y;
 	update(k,1);
 }

  //sort(t,t+n);
  //sort(p,p+n);
  //ans = 0;
  //for(i=0;i<n;i++)
  //{
  //	if(t[i]!=d[i])countp++;
  //	ans+=abs(p[i].second-i);
  //}
  printf("Number of inversions are %lld\n",ans);
  return 0;
  if(countp%2==0)
  ans=countp/2;
  else
  ans=countp/2 +1;
  printf("Number of inversions are %d\n",ans);
  
  return 0;

}

