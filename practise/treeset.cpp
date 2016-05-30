#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<set>

using namespace std;

class student{
public:
  int num;
  string name;
};

class comp
{
public:
  bool operator()(student s1,student s2)
  {
    if(s1.num<s2.num)
      return true;
    else
      return false;
  }
};


int main(int argc, char* argv[])
{
  set<student, comp> mystudent;

  student a1;
  student a2,a3;

  a1.num=10; 
  a1.name="Nilesh";
 
  a2.num=12;
  a2.name="Shubhang";

  a3.num=3;
  a3.name="Shasha";

  mystudent.insert(a2);
  mystudent.insert(a1);
  mystudent.insert(a3);
  
  cout<<"The number of students" << mystudent.size()<<endl;
  set<student ,comp>::iterator it;
  it=mystudent.find(a1);
  mystudent.erase(it,mystudent.end());
  for(it=mystudent.begin(); it!=mystudent.end();it++)
    {
      cout<<it->num<<"\t"<<it->name<<endl;
    }

 
  //cout<<"\n"<<mystudent.count(a2)<<endl;


  return 0;
}
