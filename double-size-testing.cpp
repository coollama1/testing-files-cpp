
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


void doubleSize(int*& A, int size )
{
    int* replacement = new int [size*2];
    for(size_t c = 0; c < size; c++)
    {
        replacement[c] = *(A + c);
    } 
    A = replacement;

}

int main()
{
    int* a = new int [5];
    a[0] = 1;
    a[1] = 2;
    a[3] = 3;
    doubleSize(a,5);
    for(size_t c =0; c < 10; c++)
    {
        cout << a[c] << endl;
    }
    
    delete [] a;
}