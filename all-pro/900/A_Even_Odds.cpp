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
    ll n, k;
    cin >> n >> k;
    vector<int> v;
    int even = n / 2;
    int odd = even;
    if (n & 1)
        odd++;

    if (k > odd)
    {
        ll evenNum = k-odd;
        cout << evenNum * 2;
    }
    else
    {
        cout << (k * 2) - 1;
    }
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