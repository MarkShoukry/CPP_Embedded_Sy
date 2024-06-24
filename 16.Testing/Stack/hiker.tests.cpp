#include "hiker.hpp"
#include <gtest/gtest.h>

using namespace ::testing;


class StackTesting : public ::testing::Test
{
public:
    void SetUp() override
    {

    }
    void TearDown () override
    {

    }
    State expected_state = SUCCESSFUL;
};



TEST_F(StackTesting, able_to_push_in_stack)
{
    
    Stack stack(2);
    ASSERT_EQ(stack.push(10), expected_state);
}


TEST_F(StackTesting, able_to_push_miltiple_time_in_stack)
{
    Stack stack(5);

    std::array<int,5> data_to_push = {10 , 40 , 30 , 50 , 100};
    for (auto element : data_to_push)
    {
        ASSERT_EQ(stack.push(element), expected_state);
    }

}

