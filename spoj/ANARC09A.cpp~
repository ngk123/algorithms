#include<bits/stdc++.h>

using namespace std;

int main()
{	
	string str;
	int len,i,br,rep,t;
	for(t=1; ;t++)
	{
		cin >> str;
		br=rep=0;
		if(str[0]=='-')break;
		len=str.length();
		
		for(i=0;i<len;i++)
		{
			if(str[i]=='{')br++;
			else br--;
			
			if(br<0)
			{
				br=1;
				rep++;
			}			
		}	
		
		cout << t<<". " << rep+br/2 << endl;	
		
		
		
	}
	return 0;
}



