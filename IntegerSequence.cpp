// https://mycode.prepbytes.com/contest/PRIMETIMEAPRIL21/problems/INTSEQ

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int l, r;
    cin >> l >> r;
    
    int c = 0;
    while (l <= r)
    {
      c++;
      l *= 2;
    }
    
    cout << c << endl;
  }
  
  
  
  return 0;
}


