
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;

void sort (vector <int>& v)
{
    int temp, minLocation;
    for(int c = 0; c < v.size() -1; c++)
    {
        minLocation = c;
        for(int d = c + 1; d < v.size(); d++ )
        {
            if(v[d] < v[minLocation] ) 
            {
                minLocation = d; // sets minLocation to the location of the smallest integer
            }                   // in the vector (starting from c+1 to v.size())
        }
        temp = v[c];            // places the smallest (excluding the elements before 
        v[c] = v[minLocation]; // it) integer in the correct place by switching it 
        v[minLocation] = temp;// with the eleement that's already there
    }

}

int binSearch(vector <int> v, int x)
{
    int mid = v.size()/2;
    int low = 0, high = v.size() - 1;
    do
    {
        if(v[mid] > x) // changes scope to the lower half since mid value is too big
        {
            high = mid;
            mid = low + (high - low)/2;
        }
        else if (v[mid] < x) // changes scope the upper half since mid value is too small
        {
           low = mid;
           mid = low + (high - low)/2 + 1; // + 1 helps to reach the final element
        }                                 // (y + 1) - y = 1, 1/2 = 0, 0 + low = low
        if(v[mid] == x)                  //  ^^^ infinite loop 
        {
            return mid;
        }
    }
    while(low != high);
    return -1; // if integer is not included in the vector
}

void merge (vector<int>& V1, vector<int>& V2, vector<int>& V3)
{
    if(V1.size() == 0 && V2.size() == 0)
    {
        return;
    }
    if(V1.size() == 1 && V2.size() == 0)
    {
        V3.push_back(V1[0]);
    }
    else if(V1.size() == 0 && V2.size() == 1)
    {
        V3.push_back(V2[0]);
    }
    else if(V1.size() == 0)
    { //if V2 is the only vector that contains an element(s) or
     // the first element of V2 is smaller/equal than that of V1
        V3.push_back(V2[0]);
        vector <int> modifiedVector(V2.begin() + 1, V2.end());
        merge(V1, modifiedVector, V3 );
    }
    else if (V2.size() == 0)
    { //same as previous, but conditions are swapped (V2 empty, V1[0]<V2[0])
        V3.push_back(V1[0]);
        vector <int> modifiedVector(V1.begin() + 1, V1.end());
        merge(modifiedVector, V2, V3 );
    }
    else if(V1[0] <= V2[0])
    {
        V3.push_back(V1[0]);
        vector <int> modifiedVector (V1.begin() + 1, V1.end());
        merge(modifiedVector, V2, V3);
    }
    else
    {
        V3.push_back(V2[0]);
        vector <int> modifiedVector (V2.begin() + 1, V2.end());
        merge(V1, modifiedVector, V3);
    }
}

int main ()
{
    vector <int> v, w, x;
    int input;
    cout << "Enter values into the first vector" << endl;

    while(cin >> input)
    {
        v.push_back(input);
    }
    
    cin.clear();
    cout << "Enter values into the second vector" << endl;

    while(cin >> input)
    {
        w.push_back(input);
    }
    sort(v);
    sort(w);
    merge(v,w,x);

    for(vector<int>::iterator i = x.begin(); i != x.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    /*
    cout << endl << "Enter the number that you are searching for" << endl;
    cin >> input;
    cout << "The number is in the position (" << binSearch(v,input) << ") of the vector" << endl;
    */
}