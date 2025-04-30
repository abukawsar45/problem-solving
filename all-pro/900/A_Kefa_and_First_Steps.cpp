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
    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int mx = 0,l=0, r=0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<=v[i+1])r++;
        else{
            mx =max(r-l+1,  mx);
            l=i, r=i;
    
        }
        if(i+1==n){
            mx =max(r-l,  mx);
        }
    }
    cout<<mx<<'\n';
    
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