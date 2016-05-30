#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{	
	int T;
	string str;
	long long int arr1[50002],arr2[50002],arr3[50002],p[50002],temp,i,j,a,b,n,m,q;
	cin >> T;
	
	while(T--)
	{
		cin >> n >> m >> q;
		
		
		for(i=0;i<n;i++)
		{
			cin >> p[i];
			p[i]=p[i]-1;
		}
		
		memset(arr1,0,sizeof(arr1));
		memset(arr2,0,sizeof(arr2));
		
		for(i=0;i<m;i++)
		{
			cin >> str >> a >> b;
			if(str.compare("ADD")==0)
			{		
				arr1[a-1]+=b;		
				arr1[a-1]%=mod;
			}
			if(str.compare("ADDUP")==0)
			{		
				arr2[a-1]+=b;	
				arr2[a-1]%=mod;							
			}		
		}
		
		for(i=n-1;i>=1;i--)	
		{
			arr2[p[i]]+=arr2[i];
			arr2[p[i]]%=mod;
		}
				
		for(i=0;i<n;i++)
		{
			arr2[i]+=arr1[i];
			arr2[i]%=mod;
			arr3[i]=arr2[i];
		}
			
			//cout <<"hhhhhhhhhhh  "<< arr3[0] << endl ; 
		for(i=n-1;i>=1;i--)	
		{
			arr3[p[i]]+=arr3[i];
			arr3[p[i]]%=mod;
		}
		
		for(i=0;i<q;i++)
		{
			cin >> str >> a;
			if(str.compare("VAL")==0)
			{
				cout << arr2[a-1] << endl;
			}			
			
			if(str.compare("VALTREE")==0)
			{
				cout << arr3[a-1] << endl;
			}	
			
		}	
		
		
	}
	

	return 0;
}
