
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <set>
using std::set;
using std::multiset;

void sortThisBitch(vector <int>& a)
{
    multiset <int> S;
    vector <int> output;
    for(size_t c = 0; c < a.size(); c++)
    {
        S.insert(a[c]);
    }
    for(multiset<int>::iterator i = S.begin(); i != S.end(); i++)
    {
        output.push_back(*i);
    }
    a = output;
}

int main ()
{
    int input;
    vector <int> V;
    cout << "Enter the desired values into the vector" << endl;
    while(cin >> input)
    {
        V.push_back(input);
    }
    sortThisBitch(V);
    for(size_t c = 0; c < V.size(); c++)
    {
        cout << V[c] << " ";
    }
    cout << endl;
}