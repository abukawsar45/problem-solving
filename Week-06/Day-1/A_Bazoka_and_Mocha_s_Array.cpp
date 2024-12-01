#include <iostream>
#include <vector>
using namespace std;

bool solve(vector<int> &a, int n)
{
  int decreaseCount = 0;

  for (int i = 0; i < n; ++i)
  {
    if (a[i] > a[(i + 1) % n])
    {
      decreaseCount++;
    }
  }
  return decreaseCount <= 1;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }

    if (solve(a, n))
    {
      cout << "Yes\n";
    }
    else
    {
      cout << "No\n";
    }
  }

  return 0;
}
