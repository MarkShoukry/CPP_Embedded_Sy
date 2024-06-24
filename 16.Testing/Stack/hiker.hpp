#ifndef HIKER_INCLUDED
#define HIKER_INCLUDED

#include <iostream>
#include <array>

enum State
{
    UNSUCCESSFUL,
    SUCCESSFUL
};

class Stack
{
public:
    Stack(int capacity);
    ~Stack();
    
    State push(int element);
    State pop(int& element);
    State isEmpty() const ;
    State isFull() const ;
        
private:
   int *buffer ;
   int top = 0;
   int size;    
    
};

#endif
