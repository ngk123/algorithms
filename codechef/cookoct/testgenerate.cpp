#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n=10,j,i,t;
	vector<int> sum;
	t=10;
	int a[10];
	cout << t << endl;
	while(t--)
	{
	for(i=0;i<10;i++)
	a[i]=rand()%1000000;
	
	
	
	for(i=0;i<n;i++)
	{
		int size=sum.size();
		sum.push_back(a[i]);
		for(j=0;j<size;j++)
		sum.push_back(sum[j]+a[i]);
	}
	
	
	cout << "10" << endl;
	cout << "0 " ;
	int size=sum.size();
	for(i=0;i<size;i++)
	cout << sum[i] << " "; 
	sum.clear();
	cout << endl; 
	}
}
