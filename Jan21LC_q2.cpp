#include <bits/stdc++.h>
using namespace std;
int count = 0 ;

void swap (long long int *a , long long int *b)
{
    int temp = *a ;
    *a = *b ;
    *b = temp ;
    ::count ++ ;
}

int main() {
	
	int t ;
	cin >> t ;
	
	while (t--) 
	{
	    :: count = 0 ;
	    
	    int n , m ;
	    cin >> n >> m ;
	    
	    long long int A[n] , B[m] , john=0 , jack=0 ;
	    for (int i=0 ; i<n ; i++) 
	    {
	        cin >> A[i] ;
	        john+=A[i] ;
	    }
	    
	    for (int  j=0 ; j<m ; j++) 
	    {
	        cin >> B[j] ;
	        jack+=B[j] ;
	    }
	    
	    sort (A, A+n) ;
	    sort (B , B+m) ;
	    
	    int i=0 , j=m-1 ;
	    while (john<=jack && i<n && j>=0 ) 
	    {
	        swap(&A[i++] , &B[j--]) ;
	        john = accumulate (A, A+n , 0) ;
	        jack = accumulate (B , B+m , 0) ;
	    }
	    
	    if (john > jack)
	        cout << ::count << endl ;
	    else
	        cout << "-1" << endl ;
	    
	}
	
	return 0;
}