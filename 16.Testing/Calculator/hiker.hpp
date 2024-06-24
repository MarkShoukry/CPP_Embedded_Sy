#ifndef HIKER_INCLUDED
#define HIKER_INCLUDED



class Calculator
{
public:
    Calculator (int n1, int n2);
    int add ();
    int sub ();
    int mul ();
    int div ();
    
    void setNums (int num1, int num2);
    int getFirstNum();
    int getSecondNum();
    
private:
    int num1 , num2 ;
    
};

#endif
