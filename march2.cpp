#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    n = s.size();
    int group = 0,flag=0;
    for (int i=0;i<n;i++)
    {
      if(s[i] == '1')
      {
        flag = 1;
        if(s[i+1] != '1')
        {
          group++;
        }
      }
    }
    cout << group << endl;
  }
}