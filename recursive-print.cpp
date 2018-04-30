
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void verticalPrint(int n)
{
    if(n % 10 == n)
    {
        cout << n << endl;
        return;
    }
    verticalPrint(n / 10);
    cout << n % 10 << endl;
}

int main()
{
    int number;
    cout << "Printing numbers vertically, please enter a number:" << endl;
    cin >> number;
    verticalPrint(number);
}