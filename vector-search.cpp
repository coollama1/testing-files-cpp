
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

bool fancyFunction(vector<int> v, int x) //looking if x can be found in v
{
    for(int c = 0; c < v.size(); c++)
    {
        if(v[c] == x)
        return true;
    }
}

int main ()
{
    cout << "Enter the values of the array" << endl;
    int input, num;
    vector <int> v;
    while(cin >> input) //putting things into the array
    {
        v.push_back(input);
    }

    cout << "Enter the value that you are looking for" << endl;
    // cin.clear();
    cin >> num; // <<<--- cin isn't applied
    if(fancyFunction(v,num))
    {
        cout << "Congratulations, your number was found in the array!" << endl;
    }
    else
    {
        cout << "Sorry mate, better luck next time" << endl;
    }
}