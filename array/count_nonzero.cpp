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
//Time complexity O(log n)
}

/*
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
      
     if(n <= 9)
     {
      cout << n << "\n";
     }

     else
     {
        int cnt = 9;
        for(int i = 10; i <= n; i++)
        {
          int cnt1 = 0;
          int x = i;
          while( x != 0)
          {
            int rem = x % 10;
            x = x / 10;

            if(rem != 0)
              cnt1++;
          }

          if(cnt1 == 1)
             cnt++;   
        }

        cout << cnt << "\n";
      }             
 }

return 0;
}


Your code gets TLE because you check every number from 1 to n.

Complexity:

O(n log n)

If:

n = 1e9

then looping from 1 to 1,000,000,000 is impossible within time limit.

The trick is:

A number with exactly one non-zero digit looks like:

1,2,3,...9
10,20,...90
100,200,...900
1000...
*/