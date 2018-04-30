
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cstdlib>
#include <time.h>

void randPerm(int* a, size_t size)
{
    int randPos, temp;
    for(int c = 0; c < size; c++)
    {
        srand(time(0));
        randPos = (rand() % (size - c)) + c;
     
        temp = *(a + c);
        *(a + c) = *(a + randPos);
        *(a + randPos) = temp;
    }
}

int main ()
{
    int a [] = {1,2,3,4,5,6,7,8,9,10};
    randPerm(a, 10);
    
    for(size_t c = 0; c < 10; c++)
    {
        cout << a[c] << " ";
    }
    cout << endl;
}