#ifndef HIKER_INCLUDED
#define HIKER_INCLUDED



class Calculator
{
public:
    Calculator (int num1, int num2);
    int add ();
    int sub ();
    int mul ();
    int div ();
    
    void setNums (int num1, int num2);
    int getFirstNum();
    int getSecondNum();
    
    private:
    
};

#endif
