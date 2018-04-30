
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

void removeLower(string& s)
{
    string switched = "";
    for(int c = 0; c < s.length(); c++)
    {
        if(s[c] >= 'a' && s[c] <= 'z');
        else
        {
            switched += s[c];
        }
    }
    s = switched;
}

int main ()
{
    string input, step;
    cout << "Enter a string and I'll remove the lower case letters" << endl;
    while (cin >> step)
    {
        input += (step + " ");
        step = "";
    }
    cin.clear();
    removeLower(input);
    cout << "New string:" << endl;
    cout << input << endl;
}