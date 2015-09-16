// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// Created by Christopher Jones 

#include "bigint.hpp"

#include <cassert>

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left + right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 1);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left + right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 1);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left + right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 179);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left + right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 386);
    }
   
    //Add test cases as needed.

    std::cout << "Done testing addition" << std::endl;
}
