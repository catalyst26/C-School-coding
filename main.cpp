//
//  main.cpp
//  midterm question 1
//
//  Created by Gregory Francois on 2/19/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


// Inputs : 3 2 4 for a valid answer
// Inputs: 1 2 4 for a negative discriminant
// Inputs: 3 4 4 for denominator == 0

int main()
{
    
    // Declare variables
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;
    
    // Prompt user to enter variables
    cout << "Enter three variables seperated by spaces (x y z): " << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    
    // Store result of sqrt function, denominator & equation
    // in variables
    double discr = ( 3 * x - z );
    double squareRt = sqrt( discr );
    double denominator = ( y - z ) ;
    double equation = ( squareRt + 2 * y * y) / denominator ;
    
    // Checks for positive discriminant and non-undefined denominator
    if (discr < 0)
        cout << "Discriminant is negative. Result cannot be evaluated." << endl;
    
    else if (denominator == 0)
        cout << "Denominator equal to 0. Result cannot be evaluated." << endl;
    
    // Print out equation result if the checks are passed
    else
        cout << "Answer is: " << setprecision(3) << equation << "." << endl;
    

    
    return 0;
}

// Enter three variables seperated by spaces (x y z):
//3 4 4
//Denominator equal to 0. Result cannot be evaluated.
//Program ended with exit code: 0

//Enter three variables seperated by spaces (x y z):
//1 2 4
//Discriminant is negative. Result cannot be evaluated.
//Program ended with exit code: 0

//Enter three variables seperated by spaces (x y z):
//3 2 4
//Answer is: -5.12.
//Program ended with exit code: 0



