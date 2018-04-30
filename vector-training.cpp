
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

// push_back(n) adds n to the last slot in the vector (vectorName.push_back(n))
// pop_back() removes the last element of the vector (vectorName.pull_back())

int main ()
{
    vector <int> v;
    vector <int> w;
    int n;
    int arr [] = {1,2,3,4,5};
    vector <int>* p;
    int* q;
    v.push_back(3);
    v.push_back(6);
    v.push_back(17);
    p = &v;
    q = arr;
    /*
    while (cin >> n)
    {
        v.push_back(n);
    }
    
    for(int c = v.size(); c > 0; c--)
    {
        cout << v[c - 1] << " ";
    }
    cout << endl;
    */
}