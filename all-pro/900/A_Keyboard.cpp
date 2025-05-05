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
    char n;
    cin >> n;
    string s, ans = "";
    cin >> s;
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (n == 'L')
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (s[i] == str[j])
                    ans += str[j+1];
                    // cout << str[j+1] << " ";
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < str.size(); j++)
            {
                if (s[i] == str[j])
                {
                    ans += str[j - 1];
                    // cout << str[j-1] << " ";
                }
            }
        }
    }
    cout << ans;
}

int32_t main()
{
    fastread();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}