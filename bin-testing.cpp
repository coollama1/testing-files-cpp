
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

/* (LOTS OF ERRORS) 
bool search(int* A, int size, int x)
{
    if(size < 1)
    {
        return false;
    }
    int mid = A + (int*)(size/2);
    if(mid > x)
    {
        search(A,mid+1,x);
    }
    if(mid < x)
    {
        search(A+mid+1,mid,x);
    }
    if(mid == x)
    {
        return true;
    }
}
*/

int main()
{
    int numb, input;
    vector <int> v;
    cout << "Enter values for the vector:" << endl;
    while(cin >> numb)
    {
        v.push_back(numb);
    }
    cin.clear();
    cout << "Enter the value you wish to search for:" << endl;
    cin  >> input;
    if(search(&v[0], v.size(), input))
    {
        cout << "Your number was found" << endl;
    }
    else
    {
        cout << "Your number was not found" << endl;
    }
}