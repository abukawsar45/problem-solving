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
    ll n, a, b;
    cin >> n >> a >> b;

    // int i=97;
    // char c = (char)i;
    // cout<<c;

    // fill satrting a with b letters
    char arr[2 * a];
    ll A = a;
    ll j = 0;
    while (a > 0)
    {
        for (ll i = 97; i < 97 + b; i++)
        {
            arr[j++] = (char)i;
        }
        a = a - b;
    }

    a = A;
    // for(ll i=0;i<a;i++){
    //     cout<<arr[i]<<" ";
    // }

    while (n > 0)
    {
        if (n - a >= 0)
        {
            for (ll i = 0; i < a; i++)
            {
                cout << arr[i];
            }
        }
        else
        {
            ll val = n;
            for (ll i = 0; i < val; i++)
            {
                cout << arr[i];
            }
            break;
        }
        n = n - a;
    }
    cout << "\n";
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