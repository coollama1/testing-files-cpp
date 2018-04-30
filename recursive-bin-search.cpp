                        
#include <iostream>
using std::cin;
using std::cout;
using std::endl;


bool search(int* A, int size, int x)
{
    if(size < 1)
    {
        return false;
    }   
    int mid = *(A + size/2);
    if(mid > x)
    {
        return search(A, size/2, x);
    }
    if(mid < x)
    {
        return search(A + size/2 + 1, (size + 1)/2 - 1, x);  
    }
    if(mid == x)
    {
        return true;
    }
}

int main ()
{
    int input;
    int thingy [] = {0,1,2,3,4,5,6,7,8};
    cout << "Enter a number to find out whether it is contained within the mystery array" << endl;
    cin >> input;
    if( search(&thingy[0], 9, input))
    {
        cout << "Congrats, your number was found. Go you" << endl;
    }
    else
    {
        cout << "Better luck next time" << endl;
    }
}