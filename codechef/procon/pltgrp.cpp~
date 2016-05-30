#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int n,a[100003],max,i,j;
	vector<int> lcs(100004,1);
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cin >> a[i];	
	}
	
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>=a[j] && lcs[i]<lcs[j]+1)
			{
				lcs[i]=lcs[j]+1;
			}
		
		}
	}

	max=-1;
	for(i=0;i<n;i++)
	{
		if(lcs[i]>max)
		max=lcs[i];
	}	
	cout << max << endl;

	return 0;
	
}
