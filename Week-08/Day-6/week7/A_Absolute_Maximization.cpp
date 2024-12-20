#include <iostream>
#include <vector>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  vector<long long> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long result = 0;

  for (int bit = 0; bit <= 12; bit++)
  {
    bool hasOne = false, hasZero = false;

    for (int i = 0; i < n; i++)
    {
      if (a[i] & (1 << bit))
      {
        hasOne = true;
      }
      else
      {
        hasZero = true;
      }

      if (hasOne && hasZero)
        break;
    }

    if (hasOne && hasZero)
    {
      result += (1LL << bit); // Add 2^bit to the result
    }
  }

  cout << result << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
