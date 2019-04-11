//
//  MemBuf.cpp
//  MemBuf
//
//  Created by Gregory Francois on 3/30/19.
//  Copyright © 2019 Gregory Francois. All rights reserved.
//

#include "MemBuf.h"


namespace CSC252FINAL
{
    
    // Constructor
    MemBuf::MemBuf(size_t x)
    {
        cout << "MemBuf::ctor \n";
        m_data = new char(x);
        for (int i = 0; i < x; i++)
        {
            m_data[i] = '0';
        }
        
    }
    
    // add and write default ctor here:
    MemBuf::MemBuf()
    {
        cout << "MemBuf::dctor \n";
        const size_t SIZE = 256;
        m_data[SIZE];
    }
    // destructor
    // ix.f
    MemBuf::~MemBuf()
    {
        cout << "MemBuf::dtor \n";
        if (m_data != nullptr)
            delete [] m_data;
    }
    
    // add write copy ctor here:
    MemBuf::MemBuf(const MemBuf& MemBuf)
    {
        cout << "MemBuf::cctor \n";
        m_capacity = MemBuf.m_capacity;
        m_data = new char[m_capacity];
        m_pos = MemBuf.m_pos;
    }
    
    // add and write an assignment operator here
    MemBuf MemBuf::operator=(const MemBuf& mbo)
    {
        cout << "MemBuf::operator+ \n";
        MemBuf memo;
        if (memo.sizeMPos() == mbo.sizeMPos())
        {
            m_capacity = mbo.m_capacity;
            m_data = new char[m_capacity];
            m_pos = mbo.m_pos;
            return memo;
        }
        return false;
    }
    
    // add and write a getter method to get m_capacity here
    size_t MemBuf::getMCapacity() const
    {
        cout << "MemBuf::getMCapacity \n";
        return m_capacity;
    }
    // add and write a size method here
    size_t MemBuf::sizeMPos() const
    {
        cout << "MemBuf::sizeMPos \n";
        return m_pos;
    }
    
   
    
}
