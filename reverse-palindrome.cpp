
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::getline;

void reverse (string& s)
{
    string replace;
    for(int c = s.length() -1; c >= 0; c--)
    {
        replace += s[c];
    }
    s = replace;
}

bool isPalindrome(const string& s)
{
    string invert;
    invert = s;
    reverse(invert);
    if(s == invert)
    {
        return true;
    }
    return false;
}

int main()
{
    string input;
    getline(cin, input);
    reverse(input);
    cout << input << endl;
    if(isPalindrome(input))
    {
        cout << "Your string is a palindrome" << endl;
    }
    else
    {
        cout << "Your string is not a palindrome" << endl;
    }
}