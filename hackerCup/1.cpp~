#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,i,j,temp,dig,id,k,flag,l;
	int  arr[11],arr2[11];
	cin >> T;
	for(k=1;k<=T;k++){
		cin >> N;
		cout << "Case #" << k << ": " ;		
		
		if(N==0) { cout << "0 0\n"; continue ; }
		memset(arr,0,sizeof(arr));
		memset(arr2,0,sizeof(arr2));
		temp=N;
		i=0;
		while(temp)
		{
			arr[i]=temp%10;
			arr2[i]=temp%10;
			temp=temp/10;
			i++;
		}		
		flag=0;
		for(l=i-1;l>0;l--)
		{
		dig=arr[l];
		id=l;
		for(j=0;j<=l-1;j++)
		{
			if(arr[j]>dig)
			{
				flag=1;
				dig=arr[j];
				id=j;
			}	
		}
		swap(arr[l],arr[id]);
		if(flag==1)break;
		}
		
		
		flag=0;
		for(l=i-1;l>0;l--)
		{
		dig=arr2[l];
		id=l;
		for(j=0;j<=l-1;j++)
		{
			if(arr2[j]<dig)
			{
				if((l==i-1 && arr2[j]!=0)|| (l!=i-1) ){ 
				flag=1;
				dig=arr2[j];
				id=j;
				}
			}	
		}
		swap(arr2[l],arr2[id]);
		if(flag==1)break;
		}
		
		
	    for(j=i-1;j>=0;j--)cout << arr2[j];
		cout << " ";
		for(j=i-1;j>=0;j--)cout << arr[j];
		
		cout << endl;
		
	}	
	return 0;
}
