
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <set>
using std::set;

set<set<int> > powerSet(set <int>& S) //remove by reference (in case of errors)
{                                    // for testing
    set<set<int> > holder;
    set<set<int> > output;
    if(S.begin() == S.end())
    {
        output.insert(S);
        return output;
    }
    set <int>::iterator rem = S.begin();
    int x = *rem;
    S.erase(rem);
    holder = powerSet(S);
    output = holder;
    set <int> W;
    for(set<set<int> >::iterator i = holder.begin(); i != holder.end(); i++)
    {
        W = *i;
        W.insert(x);
        output.insert(W);
    }
    return output;
}


int main()
{
    cout << "Enter the values of the set" << endl;
    set<int> S;
    int input;
    while(cin >> input)
    {
        S.insert(input);
    }
	set<set<int> > P = powerSet(S);
	cout << "{\n";
	for (set<set<int> >::iterator i = P.begin(); i!=P.end(); i++) {
		cout << "  {";
		for (set<int>::iterator j = (*i).begin(); j!=(*i).end(); j++) {
			cout << *j << " ";
		}
		cout << "},\n";
	}
	cout << "}\n";
}