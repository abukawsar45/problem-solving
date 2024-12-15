#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  // Count the number of valid moves
  int moves = 0;
  stack<int> st;

  for (int i = 0; i < n ; i++)
  {

    if (st.empty())
    {
      st.push(s[i]);
    }
    else{
      if (s[i] != st.top()){
        st.pop();
        moves +=1 ;
      }
      else st.push(s[i]);
    }
  }

  // cout<<"mv "<<moves<<endl;
  // Determine the winner based on the number of moves
  if (moves % 2 == 0)
  {
    cout << "Ramos" << endl;
  }
  else
  {
    cout << "Zlatan" << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
