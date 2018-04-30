
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

void lowerToUpper(string& s)
{
    string newString;
    for(int c = 0; c < s.length(); c++)
    {
        if(s[c] >= 'a' && s[c] <= 'z')
        {
            newString += (s[c] - ('a' - 'A') );
        }
        else
        {
            newString += s[c];
        }
    }
    s = newString;
}

int main ()
{
    string input, step;
    while(cin >> step)
    {
        input += (step + " "); 
    }
    lowerToUpper(input);
    cout << input << endl;
}