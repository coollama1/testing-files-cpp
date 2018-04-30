
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fancyFunction(int x)
{
    int first = 1, second = 1, third;
    if(x == 1)
    {
        cout << "1" << endl; 
        return first;
    }
    else if (x == 2)
    {
        cout << "1 1" << endl;
        return second;
    }
    else if (x > 2)
    {
        cout << "1 1 ";
        for(int count = 3; count <= x; count++)
        {
            third = first + second;
            first = second;
            second = third;
            cout << third << " ";
        }
        cout << endl;
        return third;
    }
    return 0;
}

int main ()
{
    int input, term;
    while(cin >> input)
    {
        term = fancyFunction(input);
        cout << "Term (" << input << ") of the Fibonacci sequence is: " << term << endl;
    }
}