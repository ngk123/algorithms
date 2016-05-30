#include<bits/stdc++.h>
using namespace std;
	string decimal[]={"","one" ,"two","three","four","five","six","seven","eight","nine","ten"};
	string other[]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"}
;	

string decm[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
;	

int convert(int a,int b)
{
	if(a==1)
	{
		cout << decm[b] << " ";
	}
	
	else if(a==0)
	{
		cout << decimal[b] <<" ";	
	}
	
	else
	{
		cout<< other[a] << " ";
		if(b!=0)
		{
			cout << decimal[b]<< " ";
		}		
	}
	
	return 0;
}	
	
	
	
int main()
{
	long long int t,n,i,j;
//	string decimal[11],other[11];

	int arr[11]={0};
	cin >> t;
	
	while(t--)
	{
		cin >> n;
		i=0;
		while(n>0)
		{
			arr[i++]=n%10;
			n/=10;		
		}
		j=i-1;
		if(j>6)
		{
			if(!(arr[8]==0 && arr[7]==0)){convert(arr[8],arr[7]);
			cout << "crore" << " ";}
		}
		
		if(j>4)
		{
			if(!(arr[6]==0 && arr[5]==0)){convert(arr[6],arr[5]);
			cout << "lakh" << " ";}
		}	
		
		if(j>2)
		{
			if(!(arr[4]==0 && arr[3]==0)){convert(arr[4],arr[3]);
			cout << "thousand" << " ";}
		}	
		
			
		if(j>1)
		{
			if(arr[2]!=0)
			{
				cout << decimal[arr[2]] <<  " hundread ";
			}	
		}
		if(arr[1]==0 && arr[0]==0)
		{
			;
		}
		else if(j>1)
		{
			cout << "and ";
			convert(arr[1],arr[0]);
		}
		else
		{
			convert(arr[1],arr[0]);			
		}
		cout << endl;
	
	}


	return 0;
}

