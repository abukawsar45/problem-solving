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
    int n, k;
    cin >> n >> k;

    if (n > k || (n % 2 == 0 && k % 2 == 1)) {
        cno;
        return;
    }

    vector<int> v(n);
    if (n % 2 == 1) {
        for (int i = 0; i < n - 1; i++) v[i] = 1;
        v[n-1] = k - (n-1);
    }
    else { // both even
        for (int i = 0; i < n - 2; i++) v[i] = 1;
        int remain = k - (n-2);
        v[n-2] = v[n-1] = remain/2;
    }

    cyes;
    for (auto x : v) cout << x << " ";
    cout << '\n';
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