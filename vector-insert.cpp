
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

void sort(vector<int>& V)
{
   int temp;
   for(size_t c = 0; c < V.size() - 1; c++)
   {
       for(size_t d = c ; d < V.size(); d++)
       {
            if(V[d] < V[c])
            {
                temp = V[c];
                V[c] = V[d];
                V[d] = temp;
            }
       }
   }
}

bool insert(int x, vector<int>& V)
{
    for(vector<int>::iterator i = V.begin(); i != V.end(); i++)
    {
        if(*i == x)
        {
            return false;
        }
    }
    V.push_back(x);
    sort(V);
    return true;
}

void printVector(vector <int> V)
{
    for(vector<int>::iterator i = V.begin(); i != V.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main ()
{
    vector <int> V;
    int input;
    while(cin >> input)
    {
        V.push_back(input);
    }
    printVector(V);
    sort(V);
    printVector(V);
    cout << endl;
    cout << "Enter the values that you would like to insert into the vector" << endl;
    cin.clear();
    while(cin >> input)
    {
        insert(input, V);
        printVector(V);
    }
    
}