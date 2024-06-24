/*
Hackerrank: https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
*/

#include <iostream>
#include <string>
using namespace std;

void swap (string &a , string &b)
{
    string temp ;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp[0] ;
}


int main() 
{
    string a , b;
    cin >> a >> b ;

    cout << a.size() << " " << b.size() << endl ;
    cout << a+b << endl ;

    swap(a ,b);
    
    cout << a << " " << b << endl ;

  
    return 0;
}