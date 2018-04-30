
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;
using std::getline;

int main ()
{
    string step, input;
    while(getline(cin, step))
    {
        input += step + '\n';
    }
    cout << input;

}