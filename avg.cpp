
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sum = 0, input;

    for (int c = 0; c < 5; c++)
    {
        cin >> input;
        sum += input;
    }
    cout << "The average is " << sum/5.0 << endl;
}