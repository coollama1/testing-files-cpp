
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fancyFunction(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main ()
{
    int first, second;
    cout << "Enter two numbers \nFirst: ";
    cin >> first;
    cout << "Second: ";
    cin >> second;
    fancyFunction(first,second);
    cout << "Swapped values"<< endl << "First: " << first << " Second: " << second << endl;
}