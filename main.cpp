//
//  main.cpp
//  addTwoMatrices8_5
//
//  Created by Gregory Francois on 3/1/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

// Declare array size and function
const int N = 3;
void addMatrix(const double a[][N], const double b[][N], double c[][N]){
    
    // For loop to print out the individual elements in the array
    // After summing the two matrices
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            // Output result when function is called
            cout << c[row][column] << " "; }
        cout << endl;
    }
};


int main() {
    
    // Declare and initialize 2 dimensional array
    const int ROW_SIZE = 3;
    const int COLUMN_SIZE = 3;
    double matrixOne[ROW_SIZE][COLUMN_SIZE];
    double matrixTwo[ROW_SIZE][COLUMN_SIZE];
    // Prompt user to enter first matrix
    cout << "Enter matrix 1: " << endl;
    // For loop to fill up the rows and colums of the array
    // After each iteration
    for (int i = 0; i < ROW_SIZE; i++)
        for (int j = 0; j < COLUMN_SIZE; j++){
            // Store user input in array
            cin >> matrixOne[i][j];
        }
    // Prompt user to enter second matrix
    cout << "Enter matrix 2: " << endl;
    for (int i = 0; i < ROW_SIZE; i++)
        for (int j = 0; j < COLUMN_SIZE; j++){
            cin >> matrixTwo[i][j];
        }
    
    // Declare and initialize array to hold sum of
    // The first and second arrays
    const int X_SIZE = 3;
    const int Y_SIZE = 3;
    double total[X_SIZE][Y_SIZE];
    // For loop to add each element in both arrays
    // after each iteration and store the total
    // in an array called total
    for (int i = 0; i < X_SIZE; i++) {
        for (int j = 0; j < Y_SIZE; j++) {
            total[i][j] = matrixOne[i][j] + matrixTwo[i][j];
        }
    }
    
    // Call function to output sum of matrices to the user
    cout << "The addition of the matrices is " << endl;
    addMatrix(matrixOne, matrixTwo, total);
    
    
    return 0;
}
