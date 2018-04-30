
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

double fancyFunction(double x, double y, double z)
{
    return (x + y + z)/3.0;
}

int main ()
{
    int first, second, third;
    cout << "Please enter three numbers: " << endl;
    cin >> first >> second >> third;
    cout << "The average of the three nubmers is: " << fancyFunction(first,second,third) << endl;
}