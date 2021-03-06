#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,h,n,flag =0;
  cin >> n >> x >> h;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if(h + arr[i] >= x){
      flag = 1;
    }
  }

  if (flag == 1)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
