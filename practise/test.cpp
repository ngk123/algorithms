#include<iostream>
#include<vector>

using namespace std;
vector<int> tp();
int main()
{
	vector<int> ans;
	int i,t;
	
	ans=tp();
	t=ans.size();
	for(i=0;i<t;i++)
	{
		cout << ans[i] << endl;
	}

	return 0;
}


vector<int> tp()
{
vector<int> ans;

ans.push_back(1);
ans.push_back(2);


return ans;
}
