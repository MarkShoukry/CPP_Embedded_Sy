#include "hiker.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Calculator, add_method)
{
    Calculator cal(1,1);
    ASSERT_EQ(2, cal.add());
}




TEST(Calculator, sub_method_positiveNum)
{
    Calculator cal(3,1);
    ASSERT_EQ(2, cal.sub());
}
TEST(Calculator, sub_method_negativeNum)
{
    Calculator cal(2,5);
    ASSERT_EQ(-3, cal.sub());
}
TEST(Calculator, sub_method_works_with_negative_negative)
{
    Calculator cal(-5,5);
    ASSERT_EQ(cal.sub(), -10);
}
TEST(Calculator, sub_method_zero_by_negative)
{
    Calculator cal(-5,-5);
    ASSERT_EQ(0, cal.sub());
}
TEST(Calculator, sub_method_zero)
{
    Calculator cal(5,5);
    
}



TEST(Calculator, mul_method)
{
    Calculator cal(3,5);
    EXPECT_EQ(cal.mul(), 15 );
}


TEST(Calculator, div_method)
{
    Calculator cal(6,2);
    ASSERT_EQ(3, cal.div());
}
TEST(Calculator, div_method_negative)
{
    Calculator cal(6,-2);
    ASSERT_EQ(-3, cal.div());
}

TEST(Calculator, div_method_zero)
{
    Calculator cal(0,6);
    ASSERT_EQ(0, cal.div());
}


TEST(Calculator, div_method_error_infinty)
{
    Calculator cal(6,0);
    try {
        cal.div();
        FAIL() << "Expected std::Invalid_argument";
        }
    catch (const std::invalid_argument& method)
    {
        EXPECT_EQ (std::string("Division by zero is not allowed."), method.what()); 
    }
    catch (...)
    {
        FAIL() << "Expected std::invalid_argument";
    }
        
}
