#include<iostream>
#include<map>
#include<string>

using namespace std;
typedef pair<char,char> pcc;


int main()
{
	int T,i,len;
	map<char,char> letMap;
	char temp;
	string str;
	cin >> T;
	cin >> str;
	for(i=0;i<26;i++)
	{
		letMap.insert(pcc((char)(i+97),str[i]));
		temp=((int)str[i])-32;
		letMap.insert(pcc((char)(i+65),(char)temp));
	}	
	letMap.insert(pcc('_',' '));
	//letMap['_']=';';
	letMap.insert(pcc('.','.'));
	letMap.insert(pcc(',',','));
	letMap.insert(pcc('?','?'));
	letMap.insert(pcc('!','!'));
	
	while(T--)
	{
		cin>>str;
		len=str.length();
		for(i=0;i<len;i++)
		{
			cout<<letMap[str[i]];
		}
		cout << endl;
		
	}


	return 0;
}
