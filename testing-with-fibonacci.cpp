
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <map>
using std::map;

map <int, int> values;

int fib(int n) 
{
    if(values.find(n) != values.end())
    {
        return values[n];
    }
    else if(n <= 2) // f(1) = f(2) = 1
    {
        values[n] = 1;
        return 1;
    }
    values[n] = fib(n - 1) + fib(n - 2);
    return values[n];
    
}

int main ()
{
    cout << "Enter the term of the fibonacci sequence that you would like to calculate:" << endl;
    int input;
    cin >> input;
    cout << fib(input) << endl;
}