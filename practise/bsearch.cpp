#include<bits/stdc++.h>
using namespace std;

int main()
{
	/*
	int arr[]={10,3,5,6,11};
	int i;
	vector<int> f1(arr,arr+4);
	sort(f1.begin(),f1.end());	
	cout << binary_search(f1.begin(),f1.end(),15) << endl;
	
	
	int myints[] = {10,20,30,5,15};
  vector<int> v(myints,myints+5);

  make_heap (v.begin(),v.end());
  for(i=0;i<5;i++)
  {
  	cout << v[i] << " ";
  }
  cout << endl;
  	
  
  std::cout << "initial max heap   : " << v.front() << '\n';
	
	*/
	int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  std::vector<int> v(20);                      // 0  0  0  0  0  0  0  0  0  0
  std::vector<int>::iterator it;

  std::sort (first,first+5);     //  5 10 15 20 25
  std::sort (second,second+5);   // 10 20 30 40 50

  it=std::set_symmetric_difference (first, first+5, second, second+5, v.begin());
  v.resize(it-v.begin());
  for(it=v.begin();it!=v.end();++it)
  {
  	cout << *(it) <<  " ";
  }
  cout << endl;
	
	return 0; 	 
}
