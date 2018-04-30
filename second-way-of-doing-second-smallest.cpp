
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main ()
{
    cout << "Enter some numbers and I'll do stuff" << endl;
    int input, small, smallest, temp;
    cin >> small;
    smallest = small;
    while(cin >> input)
    {
        if( ((input < small) && (input > smallest)) || (input < smallest) )
        {
            small = input;
        }
        if(small < smallest)
        {
            temp = small;
            small = smallest;
            smallest = temp;
        }
        if(small == smallest)
        {
            small = input;
        }
    }
    cout << "The second smallest number is: " << small << endl;
}