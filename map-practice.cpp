
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <map>
using std::map;

int main ()
{
    string input;
    map<string,int> thingy;
    while(cin >> input)
    {
        thingy[input]++;
    }
    for(map<string,int>::iterator i = thingy.begin(); i != thingy.end(); i++)
    {
        cout << (*i).first << ": " << (*i).second << endl; 
    }
}