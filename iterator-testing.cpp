
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

void printVector(vector <int> W)
{
    for(size_t c = 0; c < W.size(); c++)
    {
        cout << W[c] << endl;
    }
}

int main ()
{
    vector <int> V;
    V.push_back(5);
    V.push_back(6);
    V.push_back(7);
    V.push_back(8);
    V.push_back(9);
    V.push_back(10);
    vector <int> V1 (++V.begin(),V.end());
    printVector(V1);
    printVector(V);
    

}