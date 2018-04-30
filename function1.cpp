
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int fancyFunction (int x, int y, int z)
{
    if (x >= y)
    {
        if (x >= z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if (y >= z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}

int main ()
{
    cout << "Gimme three numbers mate" << endl;
    int n, first, second, third, count = 0;
    while(cin >> n)
    {
        count++;
        if(count == 1)
        {
            first = n;
        }
        else if (count == 2)
        {
            second = n;
        }
        else if(count == 3)
        {
            third = n;;
            cout << "The highest nubmers is: " << fancyFunction(first,second,third) << endl;
            count = 0;
        }
    }
}