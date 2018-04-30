
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

int secondSmallest(vector <int> v)
{
    int small = v[0], smallest = v[0], temp;
    for(int c = 1; c < v.size(); c++ )
    {
        if( ((v[c] < small) && (v[c] > smallest)) || (v[c] < smallest ) )
        {
            small = v[c];
        }
        if(small < smallest)
        {
            temp = small;
            small = smallest;
            smallest = temp;
        }
        if(small == smallest)
        {
            small = v[c];
        }
    }
    return small;
}

int main ()
{
    cout << "Enter some numbers and I'll do stuff" << endl;
    vector <int> numbers;
    int input;
    while(cin >> input)
    {
        numbers.push_back(input);
    }
    cout << "The second smallest number is: " << secondSmallest(numbers) << endl;
}