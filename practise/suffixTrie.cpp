#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<cstdlib>
#define MAX 200
using namespace std;
typedef struct stNode
{
	vector<int> indexes;
	stNode* children[MAX];
}stNode;

stNode* root;
int insertTree(stNode* node, string s, int idx);
vector<int> searchPos( vector<int>& t,stNode *node , string pat);
int patLen;

int main()
{
	vector<int>  answers;
	vector<int>  answers2;
	vector<int>::iterator it;
	int i,t;
	string text="GeeksForGeeks";
	int len=text.length();
	root=(stNode *)malloc(sizeof(stNode));
	for(i=0;i<len;i++)
	{
		insertTree(root,text.substr(i),i);
	}
	string str="Geeks";
	patLen=str.length();
	 answers2=searchPos(answers,root,"Geeks");
	
	cout << "Inside Main function : " << endl;
	
	t=answers.size();
	cout << " t " << t << endl;
	for(i=0;i<t;i++)
	{
		cout << answers2[i] << " " ;		
	}
	return 0;
}

vector<int> searchPos( vector<int>& t,stNode *node , string pat)
{
	vector<int> ans;
	//ans.clear();
	vector<int>::iterator it;
	cout << pat << endl;
	int len2=pat.length();
	if(pat.length()==0)
	{
		//ans.swap(node->indexes);	
		//for(it=ans.begin();it!=ans.end();++it)
		{
			//cout << (*it)-patLen << "\n" ;		
		}
		t.swap(node->indexes);	
		return t;
	}
	if(node->children[(int)pat.at(0)]!=NULL)
	{
		return searchPos(t,node->children[(int)pat.at(0)],pat.substr(1));			
	}
	else	
	{
		cout << "Null" << endl;
		return ans;	
	}	
}

int insertTree(stNode* node, string s, int idx)
{
	//cout << idx << endl;
	(node->indexes).push_back(idx);
	if(s.length()>0)
	{
		int temp=(int)s.at(0);
		if(node->children[temp]==NULL)	
		{
			node->children[temp]=(stNode*)malloc(sizeof(stNode));
		}
		insertTree(node->children[temp], s.substr(1), idx+1);
	}
	return 0;
}

