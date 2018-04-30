
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int toThePower(int x, int n)
{
    if(n == 1)
    {
        return x;
    }
    return x * toThePower(x, n - 1);
}

int main ()
{
    int number, power;
    cout << "Enter the number followed by the power you wish to compue:" << endl;
    cin >> number >> power;
    cout << toThePower(number, power) << endl;
}