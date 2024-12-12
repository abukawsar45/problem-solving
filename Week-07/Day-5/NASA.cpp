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
const int mx = (1 << 15);

bool isPalindrome(int x)
{
  string str = to_string(x), str2;
  str2 = str;

  reverse(str2.begin(), str2.end());
  return str2 == str;
}

vector<int> palindrome;
void makePalindrome()
{
  for (int i = 0; i < mx; i++)
  {
    bool flag = isPalindrome(i);
    if (flag)
    {
      palindrome.push_back(i);
    }
  }
}

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n), cnt(mx + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    cnt[v[i]]++;
  }

  // int XOR = v[0];
  ll ans = n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < palindrome.size(); j++)
    {
      int cur = (v[i] ^ palindrome[j]);
      ans += cnt[cur];
      // cout << cnt[cur] << endl;
    }
  }

  cout << (ans / 2) << endl;

  // cout<< endl;
}

int32_t main()
{
  fastread();
  makePalindrome();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}