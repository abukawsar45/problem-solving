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
    if ( n>=1)
    {
        cout << n;
        return;
    }
    int m = n;
    int remind = n % 10;
    int num1 = m / 10;
    int num2 = (num1 / 10) * 10 + remind;
    //   cout<<num1<<" "<<num2;

    if ( n>=1)
    {
        cout << n;
        return;
    }

    cout << max(num1, num2);
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