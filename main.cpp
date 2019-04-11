//
//  main.cpp
//  midterm question 3
//
//  Created by Gregory Francois on 2/19/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    
    // Initialize character variable for user input
    char userCharacter = '0';
    // Prompt user to enter a single character
    cout << "Enter a single character (4, f, B, etc.): " << endl;
    // Store user input in the initialized variable
    cin >> userCharacter;
    
    // If-Else statement to return whether the entered character
    // is uppercase, lowercase, an integer or some other character
    
    if (isalnum(userCharacter) && isdigit(userCharacter))
        cout << "You entered " << userCharacter << ". It is a numerical character." << endl;
    else if (isalnum(userCharacter) && isupper(userCharacter))
        cout << "You entered " << userCharacter << ". It is a uppercase aplhabetical character." << endl;
    else if (isalnum(userCharacter) && islower(userCharacter))
        cout << "You entered " << userCharacter << ". It is a lowercase aplhabetical character." << endl;
    else
        cout << "You entered " << userCharacter << ". It is some other character" << endl;
    
    return 0;
}

//Enter a single character (4, f, B, etc.):
//P
//You entered P. It is a uppercase aplhabetical character.

//Enter a single character (4, f, B, etc.):
//u
//You entered u. It is a lowercase aplhabetical character.
//Program ended with exit code: 0

//Enter a single character (4, f, B, etc.):
//5
//You entered 5. It is a numerical character.
//Program ended with exit code: 0

//Enter a single character (4, f, B, etc.):
//]
//You entered ]. It is some other character
//Program ended with exit code: 0


