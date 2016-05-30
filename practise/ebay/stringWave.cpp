#include<bits/stdc++.h>
using namespace std;

int main()
{
	int len,i,j,trows;	
	int diff;
	string str;
	cin >> str;
	len=str.length();
	vector<int> v(len+1);		
	
	v[0]=0;
	for(i=1;i<len;i++)
	{
		if(str[i]<str[i-1])v[i]=v[i-1]+1;
		else if(str[i]>str[i-1])v[i]=v[i-1]-1;
		else v[i]=v[i-1];			
	}	
	diff=0-(*(min_element(v.begin(),v.end())));
	trows=(*(max_element(v.begin(),v.end())))-(*(min_element(v.begin(),v.end()))) +1;	
	for(i=0;i<trows;i++)
	{
		for(j=0;j<len;j++)
		{
			((v[j]+diff)==(i))? cout << str[j] : cout << " ";
		}	
		cout << endl;	
	}
	return 0;
}

