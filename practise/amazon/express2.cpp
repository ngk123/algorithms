#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue<int> Q;
	int temp,pre,i,flag,j,ans,k;
	string str;
	vector<int> op,a,a2; // 1: '%', 2: '/', 3: '*' , 4: '+' , 5: '-'
	vector<int>::iterator it;
	
	
	cin >> str;
	pre=0;
	for(i=0;i<str.length();i++)
	{
		flag=0;
		if(str[i]=='*')
		{
			flag=1;
			op.push_back(3);
		}
		if(str[i]=='/')
		{
			flag=1;
			op.push_back(2);
		}		
		if(str[i]=='%')
		{
			flag=1;
			op.push_back(1);
		}
		if(str[i]=='+')
		{
			flag=1;
			op.push_back(4);
		}
		if(str[i]=='-')
		{
			flag=1;
			op.push_back(5);
		}
		if(flag==1)
		{
			temp=atoi(str.substr(pre,i-pre).c_str());
			cout << temp << endl;
			a.push_back(temp);	
			pre=i+1;
		}		
	}
	
	temp=atoi(str.substr(pre,i-pre).c_str());
	cout << temp << endl;
	a.push_back(temp);
	// Let precedence is '%' -> '*' -> '/' -> '+' -> '-'
	// 1 , 3,2,4 ,5
	i=0;
	a2.push_back(a[0]);
	j=0;
	
	for(i=0;i<op.size();i++)
	{
		if(op[i]==3)
		{
			a2[a2.size()-1]=a2[a2.size()-1]*a[i+1];
		}
		else if(op[i]==1)
		{
			a2[a2.size()-1]=a2[a2.size()-1]%a[i+1];
		}
		else if(op[i]==2)
		{
			a2[a2.size()-1]=a2[a2.size()-1]/a[i+1];
		}
		else
		{
			cout << "test :  "<<a[i+1] << endl;
			a2.push_back(a[i+1]);
		}		
	}
	a.clear();
	a.swap(a2);
	for(k=0;k<a.size();k++)
	{
		cout << a[k] << endl;
	}	
	
	a2.push_back(a[0]);
	
	for(i=0;i<op.size(); )
	{
		if(op[i]==1 || op[i]==2 || op[i]==3)
		{
			op.erase(op.begin()+i);			
		}
		else
		{
			i++;
		}
	}
	cout << "op size :  " << op.size() << endl;
	for(i=0;i<op.size();i++)
	{
		if(op[i]==4)
		{
			a2[a2.size()-1]=a2[a2.size()-1]+a[i+1];
		}
		else if(op[i]==5)
		{
			a2[a2.size()-1]=a2[a2.size()-1]-a[i+1];
		}				
	}
	cout << "ans : " << a2[0] << endl;	
		
	
	
	
	return 0;
}
