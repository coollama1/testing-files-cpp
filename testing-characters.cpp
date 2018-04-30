
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <vector>
using std::vector;

int main ()
{
    vector <string> vectorInputs;
    char compare;
    int currentCharValue, nextCharValue;
    bool lessThan = false;
    string currentString, nextString, tempString, lines;

    while(getline(cin, lines))
    {
        vectorInputs.push_back(lines);
    }

    for(int c = 0; c < vectorInputs.size() - 1; c++)
    {
        for(int d = c + 1; d < vectorInputs.size(); d++ )
        {
            currentString = vectorInputs[c];
            nextString = vectorInputs[d];
            for(int e = 0; e < currentString.length(); e++)
            {
                // a -> z, 97 -> 122
                currentCharValue = currentString[e];
                nextCharValue = nextString[e];
                if(currentCharValue >= 97 && currentCharValue <= 122)
                {
                    currentCharValue -= 32;
                }
                if(nextCharValue >= 97 && nextCharValue <= 122)
                {
                    nextCharValue -= 32;
                }
                if(currentCharValue < nextCharValue)
                {
                    break;
                }
                if(currentCharValue > nextCharValue)
                {
                    tempString = vectorInputs[c];
                    vectorInputs[c] = vectorInputs[d];
                    vectorInputs[d] = tempString;
                    break;
                }
            }
        }

    }

    for(int c = 0; c < vectorInputs.size(); c++)
    {
        cout << vectorInputs[c] << endl;
    }

}