#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a(1002, 1);
	//int a[1002];
	
	int sum[1002];
	int i,temp,T,n;
	/*
	for(i=0;i<1002;i++)
	a[i]=1;
	*/
	a[0]=0;
	a[1]=0;
	for(i=2;i<=1000;i++)
	{
		if(a[i]==1)
		{
		
			//cout << i << endl;
			temp=i;
			while(1)
			{
				if(temp+i > 1000)break;
				a[temp+i]=0;
				temp=temp+i;
				
			}		
		}
	
	}
	sum[0]=sum[1]=0;
	
	for(i=2;i<=1000;i++)
	{
		if(a[i]==1)sum[i]=sum[i-1]+i;
		else sum[i]=sum[i-1];
	}

	cin >> T;
	
	while(T--)
	{
		cin >> n;
		cout << sum[n]-sum[27] << endl;
	}

	return 0;
}
