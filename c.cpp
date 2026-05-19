#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--)
    {
      
     int n;
     cin >> n;
      
        int cnt = 0;
        for(int i = 1; i <= 9; i++)
        {
          long long x = i;
          while( x <= n)
          {
            cnt++;
            x *= 10;
          } 
        }

        cout << cnt << "\n";
      }             

return 0;

}