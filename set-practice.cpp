#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <set>
using std::set;
#include <string>
using std::string;
using std::getline;

int main ()
{
    set <string> S;
    string input;
    while(getline(cin, input))
    {
        S.insert(input);
    }
    for(set<string>::iterator i = S.begin(); i != S.end(); i++)
    {
        cout << *i << endl;
    }
    cout << endl << S.size() << endl;

}

// looking if something is contained within a set
// if(S.find(x) != S.end())