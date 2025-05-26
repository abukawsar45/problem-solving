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
    string s[8];
        int n=8;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        char c='.';
 
        for(int i=0;i<n;i++){
            if(count(s[i].begin(),s[i].end(),'R')==n){
                c='R';
                break;
            }
        }
 
        if(c=='.'){
            for(int j=n-1;j>=0;j--){
                bool bug=false;
                for(int i=0;i<n;i++){
                    if(s[i][j]!='B'){
                        bug=true;
                        break;
                    }
                }
                if(!bug){
                    c='B';
                    break;
                }
            }
        }
 
        cout<<c<<endl;
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