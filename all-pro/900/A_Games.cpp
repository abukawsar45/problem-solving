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
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> v, v2;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        // cout<<x<<" -v "<<y<<'\n';
        v.push_back(x), v2.push_back(y);
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v2[j])
                ans++;
        }
    }
    cout << ans << '\n';
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