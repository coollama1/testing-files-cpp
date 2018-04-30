
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int toThePower(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }
    return x * toThePower(x, y - 1);
}

int main()
{
    int number, power;
    cout << "Enter the number, followed by the power" << endl;
    cin >> number >> power;
    cout << toThePower(number, power) << endl;
}