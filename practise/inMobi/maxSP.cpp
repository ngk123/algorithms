#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,arr1[100],arr2[100],res=0,i,j,sum1,sum2;
	
	cin >> m >> n;
	
	for(i=0;i<m;i++)
	cin >> arr1[i];	
	
	for(j=0;j<n;j++)
	cin >> arr2[j];
	
	sum1=0;
	sum2=0;
	i=j=0;
	while(i<m && j<n)
	{
		if(arr1[i]>arr2[j])
		{
			sum2+=arr2[j++];		
		}
		else if(arr1[i]<arr2[j])
		{
			sum1+=arr1[i++];				
		}
		else 
		{
			res+=max(sum1,sum2);
			res+=arr1[i];
			sum1=0;
			sum2=0;
			i++;
			j++;					
		}	
	}	
	
	while(i<m)
	{
		sum1+=arr1[i++];
	}
	
	while(j<n)
	{
		sum2+=arr2[j++];
	}
	
	res+=max(sum1,sum2);
	cout << res << endl;
	
	return 0;

}
