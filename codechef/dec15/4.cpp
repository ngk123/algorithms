#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int strToBinary(string str);
int strToBinary2(string str);

int main()
{
	int t,n,num,i,toConv,want,j,temp;	
	int arr1[1025],arr2[1025],arr[1025];
	string str,strM;
	cin >> t;
	while(t--)
	{
		cin >> strM;
		toConv=strToBinary2(strM);
	//	cout << toConv << endl;
		want=toConv^1023;
		//cout << "I want this: " << want << endl;
		
		
		cin >> n;
		memset(arr,0, sizeof(arr1));
		memset(arr1,0, sizeof(arr1));
		memset(arr2,0,sizeof(arr2));
		
		for(i=0;i<n;i++)
		{
			cin >> str;
			num=strToBinary(str);
			arr[num]++;
			//cout << num << endl;;					
		}
		
		for(i=0;i<1024;i++)
		{
			if(arr[i]>0)
			{
				temp=1<<arr[i];			
				arr2[i]+=(temp/2);	
				arr2[0]+=(temp/2 -1 );
				for(j=0;j<1024;j++)
				{
					if(arr1[j]>0)
					{
						arr2[i^j]=(arr2[i^j]+(arr1[j]*arr[i])%mod)%mod;
					}				
				}
				
				for(j=0;j<1024;j++)
				{
					arr1[j]=(arr1[j]+arr2[j])%mod;
					arr2[j]=0;
				}			
			}	
		}
		arr1[0]=(arr1[0]+1)%mod;
		cout << arr1[want] << endl;		
	}
	return 0;
}


int strToBinary(string str)
{
	int base=1,num=0,i;
	//cout << str << endl;
	for(i=9;i>=0;i--)
	{
		if(str[i]=='+')
		{
			num+=base;
		}
		base=base*2;
	}
	return num;
}

int strToBinary2(string str)
{
	int base=1,num=0,i;
	//cout << str << endl;
	for(i=9;i>=0;i--)
	{
		if(str[i]=='b')
		{
			num+=base;
		}
		base=base*2;
	}
	return num;
}

