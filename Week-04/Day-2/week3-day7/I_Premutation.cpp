#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    // Read all sequences
    vector<vector<int>> sequences(n, vector<int>(n - 1));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n - 1; j++)
      {
        cin >> sequences[i][j];
      }
    }

    // Frequency map to determine the first element
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
      freq[sequences[i][0]]++;
    }
    // Find the first element (appears n-1 times)
    int first = -1;
    for (auto &[num, count] : freq)
    {
      if (count == n - 1)
      {
        first = num;
        break;
      }
    }

    // cout << first << ", " << endl;
    // Construct the permutation
    vector<int> permutation;
    permutation.push_back(first);

    // Find the sequence starting with `first`
    for (int i = 0; i < n; i++)
    {
      if (sequences[i][0] != first)
      {
        permutation.insert(permutation.end(), sequences[i].begin(), sequences[i].end());
        break;
      }
    }

    // Output the result
    for (int x : permutation)
    {
      cout << x << " ";
    }
    cout << "\n";
  }

  return 0;
}
