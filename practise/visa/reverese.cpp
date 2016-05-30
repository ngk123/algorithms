#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string s("Somewhere down the road");
    istringstream iss(s);
	//cout << iss << endl;
    do
    {
        string sub;
        iss >> sub;
        cout << "Substring: " << sub << endl;
    } while (iss);

}
