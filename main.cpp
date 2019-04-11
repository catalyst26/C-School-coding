//
//  main.cpp
//  convert_Temp
//
//  Created by Gregory Francois on 3/22/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>

// function that takes the address of variable of type double
// and applies Centigrade-to-fahrenheit conversion
void convertTemp(double* c)
{
    using std::cout;
    
    *c = ((*c * 1.8) + 32);
    cout << "The degrees in fahrenheit is " << *c << "\n";
};

int main()
{
    using std::cout;
    using std::cin;
    
    double celsius = 0;
    cout << "Enter the degrees in celsius: \n";
    cin >> celsius;
    
    convertTemp(&celsius);
    cout << "After conversion the value contained in the variable celsius is " << celsius << "\n";
    
    return 0;
}
