#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
      int n, m;
      cin >> n >> m;

      vector<string> v(n);
      for(int i = 0; i < n; i++)
      {
        cin >> v[i];
      }

      int mn = INT_MAX;
      for(int i = 0; i < n; i++)
      {
        for(int j = i + 1; j < n; j++)
        {
          int diff = 0;
          for(int k = 0; k < m; k++)
          {
            diff += abs(v[i][k] - v[j][k]);
          }
          
          mn = min(diff, mn);
        }
      }

      cout << mn << "\n";
    }

    
return 0;

}