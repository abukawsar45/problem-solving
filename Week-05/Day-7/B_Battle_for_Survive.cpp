#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    ll prevLast = v[n - 2];
    for (int i = 0; i < n-2; i++)
    {
      prevLast -= v[i];

    }
    // cout << prevLast << endl;
    cout<<v[n-1]-prevLast << endl;
  }
  return 0;
}