#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t ;
	cin >> t ;
	
	while (t--) 
	{
	    long long int n , k , i , j ;
	    cin >> n >> k >> i >> j ;
	    
	    long long int d=abs(j-i);
	    
	    if (i == j) 
	    {
	        cout << n << " " << n << endl ;
	    }
	    
	    else if (i>j) 
	    {
	        long long int A[2][4] = { {n, n-d , 0 , d} , {n-d , n , d , 0}   } ;
	        cout << A[0][(k-1) % 4] << " " << A[1][(k-1) % 4] << endl ;
	    }
	    
	    else 
	    {
	        long long int A[2][4] = { {n-d , n , d , 0 } , {n , n-d , 0 , d }  } ;
	        cout << A[0][(k-1) % 4] << " " << A[1][(k-1) % 4] << endl  ;
	    }
	   
	}
	
	return 0;
}