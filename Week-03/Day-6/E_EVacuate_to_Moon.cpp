#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n, m, h;
    cin >> n >> m >> h;
    vector<ll> carCp(n);
    vector<ll> outletPw(m);

    // for (int &x : v)
    //   cin >> x;

    for (ll &x : carCp)
      cin >>x;
      
    for (ll &x : outletPw)
      cin >> x;

    sort(carCp.begin(), carCp.end(), greater<int>());
    sort(outletPw.begin(), outletPw.end(), greater<int>());

    ll ans = 0;
    int i = 0, j = 0;
    while(i<n && j<m){
      ll totalPw = (outletPw[j] * h) * 1LL;
      ans += min(carCp[i], totalPw);
      i++;
      j++;
    }

    cout<<ans << endl;
  }
  return 0;
}