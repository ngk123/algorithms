#include<bits/stdc++.h>
using namespace std;

int main()
{
	stack<int> s;
	int temp,pre,i,flag,j,ans;
	string str;
	vector<int> op,a; // 1: '%', 2: '/', 3: '*' , 4: '+' , 5: '-'
	
	
	
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
	s.push(a[0]);
	cout << "Size : " << s.size() << endl ;
	for(j=1;j<=op.size();j++)
	{
		cout << "Op : " << op [j-1] << endl;
		if(op[j-1]==4 || op[j-1]==5)
		{
			cout << a[j] << endl;
			s.push(a[j]);
			//cout << "Size : " << s.size() << endl;
		}
		else
		{
			temp=s.top();
			cout << temp << endl;
			s.pop();
			
			if(op[j-1]==1)
			{
				s.push(temp%a[j]);
			}	
			if(op[j-1]==2)
			{
				s.push(temp/a[j]);
			}	
			if(op[j-1]==3)
			{
				s.push(temp*a[j]);
			}				
		}
		cout << "Size : " << s.size() << endl ;
	}
	ans=s.top();
	s.pop();	
	for(i=op.size()-1;i>=0;i--)
	{
		if(op[i]==4)
		{
			temp=s.top();
			s.pop();
			ans=ans+temp;
		}			
		if(op[i]==5)
		{
			temp=s.top();
			s.pop();
			ans=temp-ans;
		}	
	}
	cout << ans << endl;
	return 0;
}
