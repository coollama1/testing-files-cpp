
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
    map <string, int> M;
    string input;
    cout << "Enter strings to record their frequency" << endl;
    while(cin >> input)
    {
        M[input]++;
    } 
    cout << "Enter the string (word) to retrieve the frequency" << endl;
    
    
    /*
    cout << endl << "String frequency table:" << endl ;  
    
    for(map<string,int>::iterator i = M.begin(); i != M.end(); i++)
    {
        cout << (*i).first << ": x" << (*i).second << endl;
    }
    */
}