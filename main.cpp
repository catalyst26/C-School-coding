//
//  main.cpp
//  midterm question 2
//
//  Created by Gregory Francois on 2/19/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    // Initialize the random seed generator
    // Cast the random generator as an unsigned int to remove compiler warning
    srand((unsigned int)time(0));
    
    // Generates a two-digit random number
    // Assign random number to variable
    int randNumOne = 10 + rand() % 90;
    
    // Convert random number integer variable to string variable
    string randStr = to_string(randNumOne);
    
    // Check if individual digits are the same or not
    // print out respective statements
    if ( randStr.at(0) == randStr.at(1) )
        cout << "The random number is: " << randStr << ". The two individual digits are the same."<< endl;
    else
        cout << "The random number is: " << randStr << ". The two individual digits are not the same." << endl;
    
    
    return 0;
}

// The random number is: 66. The two individual digits are the same. Program ended with exit code: 0
// The random number is: 27. The two individual digits are not the same. Program ended with exit code: 0
