
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int gcd (int a , int b)
{
    if(b == 0)
    {
        return a;
    }
    else if(a % b == 0)
    {
        return b;
    }
    gcd(b, a % b);
}

int main()
{
    int first, second;
    cout << "Enter two integers to find the gcd" << endl;
    cin >> first >> second;
    cout << "The gcd is: " << gcd(first,second) << endl; 
}
