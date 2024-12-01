#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  string x;
  cin >> x;
  n = x.length();

  if (n == 2 && x == "()")
  {
    cout << "NO\n";
    return;
  }

  string sb;

  // Construct a valid string of nested parentheses
  for (int i = 0; i < n; ++i)
  {
    sb += '(';
  }
  for (int i = 0; i < n; ++i)
  {
    sb += ')';
  }

  // Check if x is a substring of sb
  if (sb.find(x) != string::npos)
  {
    // Construct an alternative valid string
    sb.clear();
    for (int i = 0; i < n; ++i)
    {
      sb += "()";
    }
    cout << "YES\n";
    cout << sb << "\n";
  }
  else
  {
    cout << "YES\n";
    cout << sb << "\n";
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int testCases;
  cin >> testCases;

  while (testCases--)
  {
    solve();
  }

  return 0;
}