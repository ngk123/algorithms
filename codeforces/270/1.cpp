#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n,temp,i,j;
	int arr[1000004]={0};
	arr[0]=0;
	arr[1]=0;
	temp=sqrt(1000004);
	for(i=2;i<temp;i++)
	{
		
		if(arr[i]==0)
		{
			for(j=2*i;j<1000004;j+=i)
			{
				arr[j]=1;
			}		
		}
		
	}
	
	
	cin >> n;
	
	for(i=2; ;i++)
	{
		if(arr[i]==1 && arr[n-i]==1)
		{
			cout << i << " " << n-i << endl;
			break;
		}
	
	}




	return 0;
}
