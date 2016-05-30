#include<bits/stdc++.h>
using namespace std;
string str;
string a[10]={"" ,"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int n;

void dfs(string str2,int id)
{
	int temp,i;
	if(id==n)
	{
		cout << str2 << endl;
	}
	else
	{
		temp=str[id]-'0';
		for(i=0;i<a[temp].length();i++)
		{
			string str3="";
			str3=str3+str2;
			str3=str3+a[temp][i];
			dfs(str3,id+1);
		}
		if(a[temp].length()==0)
		{
			dfs(str2,id+1);	
		}			
	}
	return ;
}

int main()
{	
	string str2="";
	cin>>str;
	n=str.length();
	dfs(str2,0);
	return 0;
	
}
