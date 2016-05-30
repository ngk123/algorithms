#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	int sum1[101][101],sum2[101][101],arr[101][101];
	cin >> t;
	int i,j,m,n;
	while(t--)
	{
		
		cin >> m >> n;
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		cin >> arr[i][j];
		
		for(j=0;j<n;j++)
		{sum1[0][j]=arr[0][j];
		//cout << sum1[0][j] << " ";
		}
		//cout << endl;
		
		
		
		for(i=1;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				
				sum1[i][j]=arr[i][j];
				if(j-1 >= 0)sum1[i][j]+=sum1[i-1][j-1];
				//cout << sum1[i][j] << " ";
			}
			
			//cout << endl;
		}
		
		for(j=0;j<n;j++)
		{
		sum2[0][j]=arr[0][j];
		//cout << sum2[0][j] << " ";
		}
		//cout << endl;
		
		
		for(i=1;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				sum2[i][j]=arr[i][j];
				if(j+1 <n)sum2[i][j]+=sum2[i-1][j+1];
				//cout << sum2[i][j] << " ";
			}
			//cout << endl;
		}
		int l;
		int max_n=-10000000;
		int sum=0;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				for(l=1;i+l<m && j+l < n;l++)
				{
					
					sum=-sum1[i][j]+sum1[i+l][j+l]+arr[i][j];
					sum=sum+sum2[i+l][j]-sum2[i][j+l]+arr[i][j+l];
					
					if(l%2==0)
					sum=sum-arr[i+l/2][j+l/2];
					
					
					//cout << i << " " << j  << " " << sum << endl;
					if(sum>max_n)
					max_n=sum;
				}
			}
		}
		
		cout << max_n << endl;
		
		
	}
	
	

	return 0;
}
