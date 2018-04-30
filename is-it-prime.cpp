
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool fancyFunction(int x)
{
    if(x >= 2)
    {
        if (x % 2 == 0)
        {
            return false;
        }
        else
        {
            for(int step = 3; step <= x; step+=2)
            {
                if(step == x)
                {
                    return true;
                }
                else if(x % step == 0)
                {
                    return false;
                }
            }
        }
    }
    return false;

}

int main ()
{
    int input; 
    while (cin >> input)
    {
        if(fancyFunction(input))
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not prime" << endl; 
        }
    }
}