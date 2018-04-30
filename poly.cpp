
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

/* example: polynomial evaluation.
 * We'll represent a polynomial by its array of coefficients:
 * f(x) = a_0 + a_1x + a_2x^2..., we'll just store [a_0...]
 * to represent it.  Let's work over integers.  */
 int polyEval(int* a, size_t degree, int x)
 {
     int product = 1, sum = 0;
     for(size_t c = 0; c <= degree; c++)
     {
        sum += (*(a + c) * product);
        product *= x;
     } 
     return sum;
 }
 //size of coefficien vector = degree + 1
int main()
{
    vector <int> V;
    int input; 
    cout << "Enter values of the coefficients:" << endl;
    while(cin >> input)
    {
        V.push_back(input);
    }
    for(size_t c = 0; c < V.size(); c++)
    {
        if(c == V.size() - 1)
        cout << V[c] << "x^" << c << endl;
        else
        cout << V[c] << "x^" << c << " + ";
    }
    cin.clear();
    cout << "Enter the value you wish to calculate:" << endl;
    cin >> input;
    cout << polyEval(&V[0], V.size() - 1 , input) << endl;
    //for()
}