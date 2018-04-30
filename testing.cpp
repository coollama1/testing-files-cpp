

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main ()
{
    int input;
    while(cin >> input)
    {
        if(input > 2)
        {
            for(int step = 3; step <= input; step+=2)
            {
                if(step == input)
                {
                    cout << 1 << endl; 
                }
                else if(input % step == 0)
                {
                    cout << 0 << endl;
                    break;
                }
            }
        }
        else if(input == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << "Please enter a valid interger greater than or equal to 2" << endl;
        }
    }
}