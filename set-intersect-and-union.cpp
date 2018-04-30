
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <set>
using std::set;
using std::multiset;

set <int> setIntersect (set<int> a, set<int> b)
{
    int x;
    set <int> output;
    for(set<int>::iterator i = a.begin(); i != a.end(); i++)
    {
        if(b.find(*i) != b.end() )
        {
            output.insert(*i);
        }
    }
    
    return output;
}

set <int> setUnion (set<int> a, set<int> b)
{
    int x;
    set <int> output;
    for(set<int>::iterator i = a.begin(); i != a.end(); i++)
    {
        output.insert(*i);
    }
    for(set<int>::iterator i = b.begin(); i != b.end(); i++)
    {
        output.insert(*i);
    }
    return output;
}

int main ()
{
    set <int> first,second,third, fourth;
    int input;
    cout << "Enter values into the first set" << endl;
    while(cin >> input)
    {
        first.insert(input);
    }
    cin.clear();
    cout << endl << "Enter values into the second set" << endl;
    while(cin >> input)
    {
        second.insert(input);
    }
    third = setIntersect(first, second);
    cout << endl << "Here is the intersection of the two sets" << endl;
    for(set<int>::iterator i = third.begin(); i != third.end(); i++)
    {
        cout << *i << " ";
    }
    fourth = setUnion(first,second);
    cout << endl << endl << "Here is the union of the two sets" << endl;
    for(set<int>::iterator i = fourth.begin(); i != fourth.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}