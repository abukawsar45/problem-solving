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
    if (n > 45)
        minus;
    else
    {
        string s;
        for (int i = 9; i >0; i--)
        {
            if(n-i>=0)
            {
                s += to_string(i);
                n -= i;
            }
            if (n == 0)
                break;
        }
        
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }
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