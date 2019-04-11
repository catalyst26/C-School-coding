//
//  main.cpp
//  midterm question 4
//
//  Created by Gregory Francois on 2/19/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <cctype>
#include <string>
using namespace std;


int main()
{
    
    // Initialize variable to capture user sentence input
    string userStr = "abcdefg";
    // Prompt user to enter a sentence
    cout << "Enter a sentence (Mary had a little lamb): " << endl;
    // Getline function to capture the user's entire message
    // Not just the first character
    getline(cin, userStr);
    // Print out the sentence back to the user
    cout << "Your sentence is: " << userStr << endl;
    cout << "Your sentence has " << userStr.size() << " characters in it." << endl;
    
    // For loop to iterate through string for the length
    // Updating the word count after each whitespace, incrementing by 1
    int wordCount = 1;
    for (int i = 0; i < userStr.length(); i++) {
        if (userStr.at(i) == ' ')
        {
            wordCount++;
        }
    }
    // Outputting the word count
    cout << "The number of words is " << wordCount << endl;
    // Using the subscript operator with size function to return second to last character
    cout << "The second to last character using subscript operator is " << userStr[userStr.size()-2] << endl;
    // Using the at function with size function to return second to last character
    cout << "The second to last character using at function is " << userStr.at(userStr.size()-2) << endl;
    
    
    return 0;
}

// Enter a sentence (Mary had a little lamb):
// Let's go to the movies
// Your sentence is: Let's go to the movies
// Your sentence has 22 characters in it.
// The number of words is 5
// The second to last character using subscript operator is e
// The second to last character using at function is e
// Program ended with exit code: 0
