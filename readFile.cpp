/********************************************************************
 * Name: readFile.cpp 
 * Date: 2/17/2018
 * Description: Read file contents into a vector of integers.
 * Note: Based on code originally written by Patrick Mullaney on 4-26-217
 ********************************************************************/

#include <iostream>

#include <fstream>
#include <vector>
#include <sstream>
#include <iterator>
#include <cstdlib>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) 
{    
    std::ifstream inputFile;
    
    inputFile.open("input.txt");
    
    string line;
    string number;
    int amount;
    
    if(inputFile)
    {
        // Read input line by line.
        while(getline(inputFile, line))
        {
            std::stringstream stream(line);
            vector<int> numbers((std::istream_iterator<int>(stream)),
                                (std::istream_iterator<int>()));
            
            int arr[numbers.size()];
            int size = numbers.size();
            
            getline(inputFile, number);
  
            amount = std::stoi(number);
            
			//show the user the values
			cout << amount << endl;

            // Copy line into array.
            for(int i = 0; i < numbers.size(); i++)
            {
                arr[i] = numbers[i];
            }
            
        }
    }
    else
	{
        cout << "File not found." << endl;
    }
	
    return 0;
}
