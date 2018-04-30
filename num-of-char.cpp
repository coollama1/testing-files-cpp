
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

int numOfChars(char x, string input)
{
    int count = 0;
    for(int c = 0; c < input.length(); c++)
    {
        if(input[c] == x)
        {
            count++;
        }
    }
    return count;
}

int main ()
{
    string input, parts;
    char target;
    cout << "Input a string" << endl;
    //input = "Wow, this program is useless";
    while(cin >> parts)
    {
        input += (parts + " ");
        parts = "";
    }
    cin.clear();
    cout << "Input a character" << endl;
    cin >> target;
    cout << "The character \'" << target << "\' appears (" << numOfChars(target, input) << ") time(s) in the string" << endl;

}