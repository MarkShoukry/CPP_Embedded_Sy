/*
HackerRank: https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int n;
    cout << "Enter Element of vector\n" ;
    cin >> n ;
    
    vector<int> mvector(n) ;
    for (int i=0 ; i < n ; i++ )
    {
        cin >> mvector[i] ;
    }

    
    sort(mvector.begin() , mvector.end());

    for (int i = 0 ; i < n ; i++)
    {
        cout << mvector[i] << " " ; 
    }
    cout  << endl ;
    return 0;
}
