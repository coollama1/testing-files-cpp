
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <cstdlib>

void arrayShuff(int* A, size_t n)
{
    int temp,replace;
    for(size_t c = n; c > 0; c--, A++)
    {
        replace = rand() % c + (n - c);
        cout << A << endl;
    }
}

int main ()
{
    for(size_t c = 0; c < 20; c++)
    {
        cout << rand() % 10 << endl;
    }
    int a [] = {1,2,3,4};
    arrayShuff(a,4);
}