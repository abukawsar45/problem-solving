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
    string s, ans = "";
    cin >> s;

    int n = s.size();
    bool flag = true;
    if (n > 3)
    {
        for (int i = 0; i < n ; i++)
        {
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
            {
                if (flag)
                {
                    ans += ' ';
                    flag = false;
                }
                i += 2;
            }
            else
            {
                // cout<<i<<" -> "<<s[i]<<'\n';
                ans += s[i];
                flag = true;
            }
        }
       
        
    }
    
    
    else
    {
        cout << s << '\n';
    }
    string ans2;
    flag = true;
    cout<<ans<<"\n";
    
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