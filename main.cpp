//
//  main.cpp
//  arraymax
//
//  Created by Gregory Francois on 7/27/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
using namespace std;

int arrayMax(int A[], int n)
{
    int currMax = A[0];
    for (int i =0; i < n - 1; i++)
    {
        if (currMax < A[i])
            currMax = A[i];
    }
    return currMax;
};

int main() {
    
    const int arrSize = 8;
    int array[arrSize] = {65 , 35 ,67 , 89 , 325, 23, 53, 68};
    
    cout << "The maximum number in the array is: " << arrayMax(array, arrSize) << "\n";
    return 0;
}
