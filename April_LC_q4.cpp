#include <bits/stdc++.h> 
using namespace std; 
#define L long long int

void solve(L n)
{
  L arr[] = {20,36,51,60};
  if(n<=4){
    cout << arr[n-1] <<endl;
  }
  if(n==5)
    cout << 74 << endl;
}
int main() 
{
  L t;
  cin >> t;
  L n;
  while(t--){
    cin >> n ;
    solve(n);
  }
  return 0; 
} 
