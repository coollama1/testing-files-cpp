
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::getline;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::cerr;
using namespace std;

int main ()
{
    const char * fileLocation = "/home/coollama1/stuff/more-stuff/new-file.txt";
    string specialPlace;//"/poopdeck";
    string output, step;

    cout << "Enter file location:";
//    getline(cin, specialPlace);
//    cout << fileLocation << endl;
//    cout << specialPlace.c_str() << endl;

   // cout << "Enter the location of your file" << endl;
    cin >> specialPlace;
    const char * superSpecialPlace = specialPlace.c_str();
    ifstream infile(superSpecialPlace, ios::in);
    while(getline(infile,step))
    {
        output += step + "\n";
       // step = "";
    }
    cout << "Here are the contents of your file:" << endl << output << endl;
    //infile.open(superSpecialPlace, ios::in);
    
   // output += getline(infile, step);
   // step = "";
   // output += getline(infile, step);
    //cout << "Here are the contents of the file:" << endl << output << endl;

    //while(infile >> step)
    //{
    //    output += (step + " ");
    //    step = "";
    //}
    //cout << "Here are the contents to your file: " << endl << output << endl;
    //getline(infile, output);
    //cout << output << endl;
    //infile.close();
}