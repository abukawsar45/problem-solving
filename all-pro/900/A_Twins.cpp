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
    int n, cnt;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    int need = 0, half = sum / 2;
    // if(sum & 0)need++;
    int ans = n;
    for (int i = n - 1; i >= 0; i--)
    {
        need += v[i];

        if (need > half)
        {
            // cout<<sum<<" = "<<need<<'\n';

            // cout << n << " -v- " << n - i << '\n';
            ans = n - i;
            break;
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