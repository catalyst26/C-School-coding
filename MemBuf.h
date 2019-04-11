//
//  MemBuf.h
//  MemBuf
//
//  Created by Gregory Francois on 3/30/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#ifndef MemBuf_h
#define MemBuf_h
#include <stdio.h>
#include <iostream>

namespace CSC252FINAL
{
    using std::cout;
    class MemBuf
    {
    public:
        MemBuf(size_t x);
        // add and write default ctor here:
        MemBuf();
        
        virtual ~MemBuf();
        
        // add write copy ctor here:
        MemBuf(const MemBuf&);
        
        // add and write an assignment operator here
        MemBuf operator=(const MemBuf&);
        
        // add and write a getter method to get m_capacity here
        size_t getMCapacity() const;
        
        // add and write a size method here
        size_t sizeMPos() const;
        
        
    private:
        // initialize me
        char* m_data = nullptr;
        size_t m_capacity = 10; // initialize me
        size_t m_pos = 22; // initialize me
    };
    
}


#endif /* MemBuf_h */
