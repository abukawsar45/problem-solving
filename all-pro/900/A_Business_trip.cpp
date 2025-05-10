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
#define fastread()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;
const int mod = 1e9 + 7;

void solve()
{
  int n;
  cin >> n;
  vector<int> arr(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
        
    }
    sort(arr.begin(), arr.end());

 int sum = 0;
 if(n==0){
    cout << 0 << endl;
    return;
 }
 for (int i = 11; i >=0; i--)
    {
     sum += arr[i];
     if (sum >= n)
     {
        cout << 12 - i << endl;
        return;
     }
        
    }
    cout<<-1;
 
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