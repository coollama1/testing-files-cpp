
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int highestPower(int k, int n)
{
    int power = 0, product = k;
    while(n % product == 0)
    {
        product *= k;
        power++;
    }
    return power;
}

int main ()
{
    int n, k;
    cout << "Enter n " << endl;
    cin >> n;
    cout << "Enter k " << endl;
    cin >> k;
    cout << "The highest power on k that divides n is (" << highestPower(k,n) << ")" << endl;
}