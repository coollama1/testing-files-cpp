
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main ()
{
    int n, count, original, max;
    while (cin >> n)
    {
        original = n;
        max = n;
        count = 0;
        while(n!=1)
        {
            count++;
            if(n % 2 == 0)
            {
                n/=2;
            }
            else 
            {
                n = n * 3 + 1;
            }
            if (max < n)
            {
                max = n;
            }
        }
    cout << "This process occured (" << count << ") times for the number (" << original << ") " << endl;
    cout << "And the maximum value is (" << max << ") " << endl;
    }
}