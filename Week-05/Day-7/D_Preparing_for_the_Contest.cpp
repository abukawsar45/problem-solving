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
    int n, k;
    cin >> n >> k;
    
    if (k == 0)
    {

      for (int i = n; i > 0; i--)
      {
        cout << i << " ";
      }
    }
    else if (k == n)
    {
      for (int i = 1; i <= n; i++)
      {
        cout << i << " ";
      }
    }
    else{
      for (int i = n-k+1; i <= n; i++)
      {
        cout << i << " ";
      }
      for (int i = 1; i <= n - k; i++)
      {
        cout << i << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}