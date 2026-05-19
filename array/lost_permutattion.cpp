#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
      int m, s;
      cin >> m >> s;

      vector<int> v(m);

      int sum = 0;
      for(int i = 0; i < m; i++)
      {
        cin >> v[i];
        sum += v[i];
      }

      int maxVal = *max_element(v.begin(), v.end());
      int result = sum + s;

      bool permut = false;
      int prefsum = 0;
      for(int i = 1; i <= result; i++)
      {
         prefsum += i;
         if(prefsum == result)
         {
          if(i >= maxVal)
          {
            permut = true;
            break;
          }
         }  
      }

      if(permut)
       cout << "YES\n";

       else 
       cout << "NO\n";

     }             

    return 0;
}