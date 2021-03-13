#include<bits/stdc++.h>
using namespace std ;

int main () 
{
    long long int t ;
    cin >> t ;
    
    while (t--) 
    {
        
        long long int n ;
        cin >> n ;
         
        long long int arr[n] ;
        for (int i=0 ; i<n ; i++) 
            cin >> arr[i] ;
            
        long long int d = ( n*(n+1) )/2 - accumulate (arr , arr+n , 0) ;
        
        int flag = 1 ;
        sort (arr , arr+n) ;
        
        for (int i=0 ; i<n ; i++) 
        {
            if (arr[i] > (i+1)) 
            {
                flag = 0 ; 
                break ;
            }
        }
        
        if ( (d<0) || (flag == 0) )
            cout << "Second" << endl ;
        
        else if (d % 2 == 0)
            cout << "Second" << endl ;
            
        else 
            cout << "First" << endl ;
    }
    
    return 0 ;
}
