#include<iostream>
#include<string>

using namespace std;
int s[1001];
int n,p;

int consistent(int a,int b ,int c)
{
	if(a==c || b==c || a==b)
	return 0;		
	else
	return 1;
}

int findNext(int i)
{
	int j,k;
	
	//cout << "Hi : " << i << endl;
	
	if(i==0)
	{
		for(k=1;k<=p;k++)
		{
			if(s[0]!=k)
			{
				s[1]=k;
				break;
			}			
		}
		i+=1;
	}
	
	
	for(j=i+1;j<n;j++)
	{
		for(k=1;k<=p;k++)
		{
			if(consistent(s[j-2],s[j-1],k))
			{
				s[j]=k;
				break;
			}			
		}
	}	
	return 0;
}


int main()
{
	int i,tmp,j,flag;
	string str;
	
	cin >> n >> p;
	cin >> str;
	for(i=0;i<n;i++)
	{
		s[i]=(int)str[i]-96;
	}
	if(p==1) { cout << "NO" << endl; return 0;}
	
	if(p>=2 && n==1 ){ if(s[0]<=p-1) cout << (char)(s[0]+97) << endl; 
	else
	cout<< "NO\n";
	return 0; }
	
	if(p==2 && n==2 ) { 
		if(s[0]==p-1) 
		{
			cout << "ba"<< endl; 
		}
		else
		{
			cout << "NO" << endl;	
		}
		 return 0;
	}

	
	flag=0;
	for(i=n-1;i>=2;i--)
	{
		tmp=s[i];
		
		for(j=tmp+1 ;j<=p ;j++)
		{
			
			if(consistent(s[i-2],s[i-1],j))
			{
				s[i]=j;
				//cout << "Hi\n";
				findNext(i);
				flag=1;
				break;				
			}
		}			
		if(flag==1)break;	
	}
	//cout << "Flag: " << flag << endl;
		i=1;
		if(flag==0)
		{
			tmp=s[i];
			for(j=tmp+1 ;j<=p ;j++)
			{
			
				if(s[0]!=j)
				{
					s[i]=j;
					//cout << "Hi\n";
					findNext(1);
					flag=1;
					break;				
				}
			}
		}
		//cout << "Flag: " << flag << endl;
		i=0;
		if(flag==0)
		{
			tmp=s[i];
		
			for(j=tmp+1 ;j<=p ;j++)
			{			
					s[i]=j;
					//cout << "Hi\n";
					findNext(0);
					flag=1;	
				
					break;				
				
			}	
		}
	
	
	
	if(flag==0)
	{
		cout << "NO" << endl;
		return 0;
	}
	
	for(i=0;i<n;i++)
	{
		cout << (char)(s[i]+96);
	}
	cout << endl;
	return 0;
		
}


