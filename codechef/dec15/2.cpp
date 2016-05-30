#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,mina,minb,i,tempA,tempB,ans,n,j,len;
	string str;
	cin >> t;
	
	while(t--)
	{
		mina=101;
		minb=101;
		cin >>n;
		for(i=0;i<n;i++)
		{
			cin >> str;
			len=str.length();
			tempA=tempB=0;
			for(j=0;j<len;j++)
			{
				if(str[j]=='a')tempA++;
				else tempB++;
			}
			if(tempA<mina)mina=tempA;
			if(tempB<minb)minb=tempB;			
		}		
		ans=min(mina,minb);
		cout << ans << endl;
	}
}
