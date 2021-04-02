#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
  int t;
  cin >> t;
  double k1,k2,k3,v;
  while(t--){
    cin >> k1 >> k2 >> k3 >> v;
    double speed = k1*k2*k3*v;
    cout << speed << endl;
    double f = 100/speed;

    double rounded = std::floor((f * 100) + .5) / 100;

    cout << rounded << endl;
    if(rounded >= 9.58)
      cout << "No" << endl;
    if (rounded <9.58)
      cout << "Yes" << endl;
  }

	return 0; 
} 
