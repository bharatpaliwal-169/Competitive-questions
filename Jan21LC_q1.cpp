#include<bits/stdc++.h>
using namespace std ;

int main () 
{
    long int t ;
    cin >> t ;
    while (t--) 
    {

        long int n ;
        long long int  k , d ;
        cin >> n >> k >> d ;

        long long int A[n] , sum=0 ;
        for (long int i=0 ; i<n ; i++) 
        {
            cin >> A[i] ;
            sum += A[i] ;
        } 

        long int days = sum / k ;

        if (days < d) 
            cout << days << endl ;

        else 
            cout << d << endl ;

    }

    return 0 ;
}