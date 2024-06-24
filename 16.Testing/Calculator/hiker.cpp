// The starting files are unrelated to the exercise.
//
// They simply show syntax for writing and testing
//  o) a global function
//  o) an instance method
// Pick the style that best fits the exercise.
// Then delete the other one, along with this comment!

#include "hiker.hpp"
#include <iostream>
    Calculator::Calculator (int n1, int n2) : num1(n1) , num2(n2)
    {
    
    }
    int Calculator::add ()
    {
        return num1 + num2 ;
    }
    
    int Calculator::sub ()
    {
        return num1 - num2;
    }
    int Calculator::mul ()
    {
         return num1 *  num2;

    }
    int Calculator::div ()
    {
        return num1 / num2;
    }
    
    void Calculator::setNums (int n1, int n2)
    {
        this->num1 = n1 ;
        this->num2 = n2 ;
    }
    int Calculator::getFirstNum()
    {
        return num1;
    }
    int Calculator::getSecondNum()
    {
        return num2;
    }






