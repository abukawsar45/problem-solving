#include <bits/stdc++.h>
#define int long long
#define ll long long
#define fastread()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;

void solve()
{
  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  for (auto &i : a)
    cin >> i;

  vector<int> x(q);
  for (auto &i : x)
    cin >> i;

  set<int> st;

  for (int k = 0; k < q; k++)
  {
    if (st.count(x[k]))
      continue;
    st.insert(x[k]);

    for (int i = 0; i < n; i++)
    {
      if (a[i] % (1 << x[k]) == 0)
      {
        a[i] += (1 << (x[k] - 1)); 
      }
    }
  }

  for (int val : a)
  {
    cout << val << " ";
  }
  cout << endl;
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
