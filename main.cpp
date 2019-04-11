//
//  main.cpp
//  pointers
//
//  Created by Gregory Francois on 3/14/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    
    using std::string;
    string *ps = new string("abcd");
    
    using std::cout;
    cout << "The first 3 characters are : " << (*ps).substr(0, 3) << "\n";
    cout << "The length is " << (*ps).length() << "\n";
    
    cout << "The first 3 characters are : " << ps->substr(0, 3) << "\n";
    cout << "The length is " << ps->length() << "\n";
    
    delete ps;
    
    return 0;
    
}
