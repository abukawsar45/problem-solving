#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pr pair<int, int>
#define prl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;
const int mod = 1e9 + 7;

int remove(const string &s, char removeChar)
{
  int left = 0, right = s.size() - 1;
  int removals = 0;

  while (left < right)
  {
    if (s[left] == s[right])
    {
      left++;
      right--;
    }
    else
    {
    
      if (s[left] == removeChar)
      {
        left++;
        removals++;
      }
      else if (s[right] == removeChar)
      {
        right--;
        removals++;
      }
      else
      {
        return -1;
      }
    }
  }
  return removals;
}

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

 
  int left = 0, right = n - 1;
  while (left < right && s[left] == s[right])
  {
    left++;
    right--;
  }

  if (left >= right)
  {
    cout << 0 << '\n'; 
    return;
  }

  
  char leftChar = s[left], rightChar = s[right];
  int resultLeft = remove(s, leftChar);
  int resultRight = remove(s, rightChar);

  if (resultLeft == -1 && resultRight == -1)
  {
    cout << -1 << '\n'; 
  }
  else if (resultLeft == -1)
  {
    cout << resultRight << '\n';
  }
  else if (resultRight == -1)
  {
    cout << resultLeft << '\n';
  }
  else
  {
    cout << min(resultLeft, resultRight) << '\n';
  }
}

int32_t main()
{
  fastread();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}