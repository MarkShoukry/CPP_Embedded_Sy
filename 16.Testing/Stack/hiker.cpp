// The starting files are unrelated to the exercise.
//
// They simply show syntax for writing and testing
//  o) a global function
//  o) an instance method
// Pick the style that best fits the exercise.
// Then delete the other one, along with this comment!

#include "hiker.hpp"
#include <iostream>
    

Stack::Stack(int capacity) : size(capacity)
{
    buffer = new int[size];
}

Stack::~Stack() 
{
    delete[] buffer;
}


State Stack::push(int element)
{
    if(isFull())
    {
        return UNSUCCESSFUL;
    }

    buffer[top++] = element;
    return SUCCESSFUL ;
}

State Stack::pop(int& element)
{
    if(isEmpty())
    {
        return UNSUCCESSFUL;
    }

    element = buffer[--top] ;
    return SUCCESSFUL ;
}

State Stack::isEmpty() const 
{
    if (top == 0)
    {
        return SUCCESSFUL ;
    }
    return UNSUCCESSFUL ;
    //return top == 0 ? SUCCESSFUL : UNSUCCESSFUL;
}
    
State Stack::isFull() const 
{
    if (top == size )
    {
        return SUCCESSFUL;
    }
    return UNSUCCESSFUL;
    //return top == size ? SUCCESSFUL : UNSUCCESSFUL;
}







