//
//  main.cpp
//  computeDeviation7_11
//
//  Created by Gregory Francois on 3/1/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

// Compute the mean of an array of double values
double mean(const double x[] , int size , double y){
    
    // Declare value to store mean
    double meanResult = y / size ;
    
    // Return mean when function is called
    return meanResult;
};
// Compute the deviation of double values
double deviation(const double x[] , int size , double y){
    
    // Declare variable to hold summation of discriminant numerator
    double total = 0.0;
    // Loop to sum each element subtracted by the mean, then square each iteration
    // and hold that result in total variable
    for (int i = 0; i < size; i++) {
        total += pow(x[i] - y, 2.0) ;
    }
    // Declare variable for discriminant denominator
    double discrDenom = size - 1.0;
    // Declare variable to compute value of discriminant
    double discr = total / discrDenom ;
    // Declare variable to compute standard deviation
    double deviationResult = sqrt(discr);
    
    // Return standard deviation when function is called
    return deviationResult;
};


int main()
{
    
    
    // Declare array
    const int NUMBER_OF_ELEMENTS = 10;
    double numbers[NUMBER_OF_ELEMENTS];
    // Declare variable to hold sum to be divided by the size
    // To get the mean or average
    double sum = 0;
    
    // Prompt user to enter ten numbers
    cout << "Enter ten numbers: " << endl;
    
    // Loop to walk the array, summing the elements
    // And storing the value in sum variable
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    // Created variable to store index of a number in array variable y;
    // Created variable to store mean of array to pass to function
    double arrayMean = sum / NUMBER_OF_ELEMENTS;
    
    // Call functions to output mean and SD to user
    cout << "The mean is " << mean(numbers, NUMBER_OF_ELEMENTS, sum) << endl;
    cout << "The standard deviation is " << deviation(numbers, NUMBER_OF_ELEMENTS, arrayMean) << endl;
    
    
    
    return 0;
}
