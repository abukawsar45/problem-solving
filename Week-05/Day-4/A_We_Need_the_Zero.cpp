#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;
    vector<int> v(n);
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      XOR ^= v[i];
    }

 

    for (int i = 0; i < n; i++){
      v[i] ^= XOR;
    }

    int y = 0;

    for (int i = 0; i < n;i++)
      y ^= v[i];
    
    if (y == 0)
      cout<<XOR << endl;
    else
      cout << -1 << endl;

    // cout << XOR << endl;
    
  }
  return 0;
}

// 

// 7 4 3 
// 0 1 2 3 
// 3 0 0 1 