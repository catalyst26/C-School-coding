//
//  main.cpp
//  MemBuf
//
//  Created by Gregory Francois on 3/30/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include "MemBuf.h"
#include <iostream>


int main()
{
    using namespace CSC252FINAL;
    
    using std::cout;
    // ix.a
    MemBuf mo(100);
    // ix.b
    MemBuf mo2 = *new MemBuf(mo);
    // ix.c
    mo.operator=(mo2);
    // ix.d
    cout << mo2.sizeMPos() << "\n";
    // ix.e
    cout << mo2.getMCapacity() << "\n";
    
    
    
    return 0;
}
