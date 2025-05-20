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

vector<int> v[2005];
int vis[2005];
int dfs(int a)
{
    int z = 0;
    vis[a] = 1;
    for (int x : v[a])
    {
        if (!vis[x])
            z = max(z, dfs(x));
    }
    return (z + 1);
}
void solve()
{
    set<int> boss;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == -1)
            boss.insert(i);
        else
            v[t].push_back(i);
    }
    int z = 0;
    for (int a : boss)
    {
        z = max(z, dfs(a));
    }
    cout << z;
}

int32_t main()
{
  fastread();
  int t = 1;
//   cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}