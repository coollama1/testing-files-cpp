
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main ()
{
    int number;
    cout << "Enter the number that you wish to take the factorial of:" << endl;
    cin >> number;
    cout << factorial(number) << endl;
}