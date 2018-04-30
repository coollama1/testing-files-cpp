
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

int main ()
{
    string initfilename = "/home/coollama1/csc103-projects/p3/res/glider-40x20";
    int max_gen;
    string wfilename = "file-to-read.txt";
    cin >> max_gen;
    
    ifstream infile(initfilename.c_str());
	vector <vector <bool> > before;
	vector <vector <bool> > after;
	vector <vector <int> > neighbors;
	vector <int> group; 
	vector <bool> middleman;
	string sub, whole;
    int cells = 0;
    int row = 0, col;
	string input, step, output;

	while(getline(infile, step))
    {
       input += step;
       row++;
    }
    col = input.length()/row;

    
	for(int c = 0; c < col; c++) //sets the sizes for both arrays
	{
		middleman.push_back(false);
		group.push_back(0);
    }
    
	int count = 0;
	for(int c = 0, e = 0; c < row; c++) //converting string array into bool matrix
	{
		for(int d = 0; d < col; d++, e++)
		{
			if(input[e] == 'O')
			{
                middleman[d] = true;
			}
			else
			{
                middleman[d] = false;
			}
		}
		before.push_back(middleman);
	}

    after = before;

for(int iterations = 0; iterations < max_gen; iterations++ )
{	
	for(int c = 0; c < row; c++) //calculates the numb of neighbors for each cell
	{
		for(int d = 0; d < col; d++ )
		{
			int left = ((d - 1) + col) % col;
			int right = (d + 1) % col;
			int top = ((c - 1) + row) % row;
			int bottom = (c + 1) % row;
			cells = 0;
			if(after[top][left]) //upper left
			{
				cells++;
			}
			if(after[top][d]) //top
			{
				cells++;
			}
			if(after[top][right]) //upper right
			{
				cells++;
			}
			if(after[c][left]) //left
			{
				cells++;
			}
			if(after[c][right]) //right
			{
				cells++;
			}
			if(after[bottom][right]) //bottom right
			{
				cells++;
			}
			if(after[bottom][d]) //bottom
			{
				cells++;
			}
			if(after[bottom][left]) //bottom leftt
			{
				cells++;
			}
			group[d] = cells;
		}
		neighbors.push_back(group); 
	}

//    If a live cell has fewer than 2 neighbors, it dies (underpopulation).
//    If a live cell has more than 3 neighbors, it dies (overpopulation).
//    If a dead cell has exactly 3 neighbors, it becomes alive (reproduction).

	for(int c = 0; c < row; c++) //applying th rules onto the 2d after vector 
	{						
		for(int d = 0; d < col; d++)
		{
			if(neighbors[c][d] < 2)
			{
				after[c][d] = false;
			}
			else if(neighbors[c][d] > 3)
			{
				after[c][d] = false;
			}
			else if(neighbors[c][d] == 3)
			{
				after[c][d] = true;
			}
		}
	}
    output = "";
	for(int c = 0; c < row; c++) //storing the new grid in the output string variable
	{
		for(int d = 0; d < col; d++)
		{
			if(after[c][d] == true)
			{
				output += 'O';
			}
			else
			{
				output += '.';
			}
		}
		if(c != row - 1)
		{
			output += '\n';
		}
    }
}
ofstream outfile(wfilename.c_str());
outfile << output;
outfile.close();
}
/*
........................................
........................................
........................................
........................................
........................................
........................................
........................................
........................................
..................O.....................
...................O....................
.................OOO....................
........................................
........................................
........................................
........................................
........................................
........................................
........................................
........................................
........................................
*/