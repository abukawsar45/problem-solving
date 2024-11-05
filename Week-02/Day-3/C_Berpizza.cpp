#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  int in = 1;
  set<pair<int, int>> st;
  multiset<pair<int, int>> ml;
  vector<int> ans;
  for (int i = 1; i <= t; i++)
  {
    int qType;
    cin >> qType;
    if(qType == 1){
      int cost;
      cin >> cost;
      st.insert({in, cost});
      ml.insert({cost, -in}); 
      in++;
    }
    else if(qType ==2){
      int pos = st.begin()->first;
      int cost= st.begin()->second;
      ans.push_back(pos);
      st.erase(st.begin());
      ml.erase({cost, -pos});
    }
    else{
      int pos = ml.rbegin()->second;
      int cost = ml.rbegin()->first;
      ans.push_back(abs(pos));
      ml.erase(--ml.end());
      st.erase({abs(pos), cost});
    }
  }
  
  for (auto x : ans)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}