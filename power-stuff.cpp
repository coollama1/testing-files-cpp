
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int powerOfTwo(int x)
{
    int count = 0, output = 0;
    while(x % 2 == 0)
    {
        x /= 2;
        output++;
    }
    return output;
}

int main ()
{
    int input;
    cout << "Enter a number n:" << endl;
    cin >> input;
    cout << "The highest power of 2 that divides n is: " << powerOfTwo(input) << endl;

}