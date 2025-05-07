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
    multiset<int> st, ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    if (n < 2)
    {
        cout << 0 << '\n';
        return;
    }
    auto it = st.begin();
    int val = *it, cnt = 1;
    it++;

    for (auto i = it; i != st.end(); i++)
    {
        // cout << *i <<" - "<< val << " ==\n";
        if ((*i - val) <= k)
        {
            cnt++;
        }
        else
        {
            ans.insert(cnt);
            cnt = 1;
        }
        // cout << *i - val << " - ";
        val = *i;
    }
    ans.insert(cnt);
    // cout << cnt << " cnt-\n";
    // for(auto val: ans)cout<<val<<" ";
    // cout<<'\n';

    val = *ans.rbegin();
    // cout << val;
    if(val==st.size())cout<<0;
    else cout<<st.size()-val;

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