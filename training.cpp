
#include <cstdio>
#include <stdlib.h> // for exit();
#include <getopt.h> // to parse long arguments.
#include <unistd.h> // sleep
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
using std::ofstream;
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main()
{
    ifstream infile("/home/coollama1/csc103-projects/p3/res/glider-40x20");
    string input, step;
    int count = 0;
    while(getline(infile, step))
    {
        if (count == 0)
        {
        input += step;
        }
        else
        {
            input += '\n' + step;
        }
        count++;
    }
    cout << input << endl;
}