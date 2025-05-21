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
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int col = -1, row = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (col == -1 && arr[i][j] == '#')
            {
                col = j;
                row = i;
            }
        }
    }
    int mx = 0;
    for (int i = row; i < n; i++)
    {
        int cnt = 0;
        for (int j = col; j < m; j++)
        {

            if(arr[i][j]=='#') mx =i;
        }
        }
    col++;
    // cout << mx <<" "<<row << " " << col << endl;
    if(mx==row)cout << (row+1) << " " << col<< endl;
    else cout<<(mx+row+2)/2<<" "<<col<<'\n';
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