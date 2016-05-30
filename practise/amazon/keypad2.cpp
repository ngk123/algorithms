#include<bits/stdc++.h>
using namespace std;
typedef pair<string,string> pss;
vector<pss> arr;
char b[26]={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};
string cale(string str)
{
	int i,temp;
	string str2="";
	for(i=0;i<str.length();i++)
	{
		if(str[i]>=65 && str[i]<=91)
		{
			temp=str[i]-65;
		}
		if(str[i]>=97 && str[i]<=122)
		{
			temp=str[i]-97;
		}
		str2=str2+b[temp];
	}	
	return str2;
}

int main()
{	
	int t,i;
	string str,str2;
	cin >> t;
	for(i=0;i<t;i++)
	{
		cin >> str;
		str2=cale(str);
		arr.push_back(pss(str2,str));
	}		
	sort(arr.begin(),arr.end());	
	for(i=t-1;i>=0;i--)
	{
		cout << arr[i].first << " "<< arr[i].second << endl;			
	}
 return 0;
}
