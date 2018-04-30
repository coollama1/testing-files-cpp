
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <map>
using std::map;

map <int, int> values;

int fibonacci(int n) //nth term of the fibonacci sequence
{
    if(n == 1 || n == 0)
    {
        return n;
    }
    return  fibonacci(n - 2) + fibonacci(n - 1);
}

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

int fancyFib(int x)
{
    int first = 1, second = 1, third;
    if(x == 1)
    {
        cout << "1" << endl; 
        return first;
    }
    else if (x == 2)
    {
        cout << "1 1" << endl;
        return second;
    }
    else if (x > 2)
    {
        cout << "1 1 ";
        for(int count = 3; count <= x; count++)
        {
            third = first + second;
            first = second;
            second = third;
            cout << third << " ";
        }
        cout << endl;
        return third;
    }
    return 0;
}

int main()
{
    int input;
    cout << "Enter the term of the fibonacci sequence that you wish to compute:" << endl;
    cin >> input; 
    cout << "Original fibonacci function: " << endl << fancyFib(input) << endl;
    cout << "Recursive fibonacci function:" << endl << fibonacci(input) << endl; 
    
}