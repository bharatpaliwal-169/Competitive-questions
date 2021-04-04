// #include <bits/stdc++.h> 
// using namespace std; 
// #define L long long int

// void solve(L n)
// {
//   L arr[] = {20,36,51,60};
//   if(n<=4){
//     cout << arr[n-1] <<endl;
//   }
//   if(n==5)
//     cout << 74 << endl;
// }
// int main() 
// {
//   L t;
//   cin >> t;
//   L n;
//   while(t--){
//     cin >> n ;
//     solve(n);
//   }
//   return 0; 
// } 

#include <bits/stdc++.h>
using namespace std;
#define L long long int
int main() {
    L t,n;
    cin >> t;
    while(t--)
    {
      cin >> n;
      L rem = n % 4; //min area analogy
      L dice = n/4; 
      L sum=0;
      if(dice > 0)
      {
        //pattern detection
        sum += ( 11 *(dice - 1)*4) - ( rem * 4) + 60; //for n > 4 
      }

      if(rem==1)
      {
        sum+=20;  //add n=1 wala to the given n sum example for n=5 is 60 + 20 = 80
      }
      else if(rem==2)
      {
        sum+=36;
      }
      else if(rem==3)
      {
        sum+=51;
      }
      cout << sum << endl;
    }
	return 0;
}