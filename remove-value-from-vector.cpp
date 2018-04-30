
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

void removeElementFrom(int x, vector <int>& a)
{
    vector <int> output;
    for(size_t c = 0; c < a.size(); c++)
    {
        if(a[c] != x)
        {
            output.push_back(a[c]);
        }
    }
    a = output;
}

int main()
{
    int input;
    vector <int> V;
    cout << "Enter values into the vector" << endl;
    while(cin >> input)
    {
        V.push_back(input);
    }
    cout << endl << "Enter the value you wish to remove" << endl;
    cin.clear();
    cin >> input;
    cout << endl << "Resulting vector" << endl;
    removeElementFrom(input, V);
    for(size_t c = 0; c < V.size(); c++)
    {
        cout << V[c] << " ";
    }
    cout << endl;
}