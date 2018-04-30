
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::getline;

int isSubstring(const string& s1, const string& s2) //checking if s1 is a substring of s2 and
{                                                  // returning the position 

    for(int c = 0; c < s2.length(); c++)
    {
        for(int d = 0; d < s1.length(); d++)
        {
            if(s2[c + d] == s1[d])
            {
                if(d == s1.length() - 1)
                {
                    return c;
                }
            }
            else
            {
                break;
            }
        }

    }
    return -1;
}

int main ()
{
    string first, second;
    cout << "Enter a string" << endl;
    getline(cin, first);
    cout << "Enter a second string to check if it is a subsring of the first" << endl;
    getline(cin, second);
    int position = isSubstring(second, first);
    if(position == -1)
    {
        cout << "Substring could not be found" << endl;
    }
    else
    {
        cout << "Substring found at position (" << position << ") of the original string" << endl;  
    }
}