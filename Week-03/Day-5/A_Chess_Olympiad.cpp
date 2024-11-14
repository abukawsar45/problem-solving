#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;

    double teamS = x + 0.5 * y;
    double opponentS = z + 0.5 * y;
    int remaining_games = 4 - (x + y + z);

    teamS += remaining_games;
    // teamS = teamS + remaining_games ;
    if (teamS > opponentS)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
 
  return 0;
}