// bigint Test Program
//
// Tests:  int constructor, uses ==
//

#include "bigint.hpp"

#include <cassert>

//===========================================================================
int main ()
{
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
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(9);
      bigint right(9);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 9);
      assert(right  == 9);
      assert(result == 18);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(22);
      bigint right(22);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 22);
      assert(right  == 22);
      assert(result == 44);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(25);
      bigint right(25);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 25);
      assert(right  == 25);
      assert(result == 50);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(999999);
      bigint right(999999);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 999999);
      assert(right  == 999999);
      assert(result == 1999998);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(9999);
      bigint right(999999);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 9999);
      assert(right  == 999999);
      assert(result == 1009998);
    }

    
    //Add test cases as needed.
    
    
    std::cout << "Done with testing addition." << std::endl;
}

