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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int A = min(a, b);
    int B = max(a, b);
    int C = min(c, d);
    int D = max(c, d);
    a = A, b= B, c = C, d = D;
    bool flag = false;
    
    if(a>c && d>b)flag = true;
    if(a<c && d<b)flag = true;
    if(a>c && b>c && a>d && b>d)flag = true;
    if(c>a && d>a && c>b && d>b)flag = true;
    if (flag)no;
    else yes;
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