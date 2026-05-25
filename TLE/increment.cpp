#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
      ll n, q;
      cin >> n >> q;
      vector<ll> a(n);

      ll sum = 0, even = 0, odd = 0;
      for(ll i = 0; i < n; i++)
      {
        cin >> a[i];

        sum += a[i];

        if(a[i] % 2 == 0)
          even++;
         else 
           odd++;
      }

      for(ll i = 0; i < q; i++)
      {
        ll type, j;
        cin >> type >> j;

        if(type == 0)
        {
          sum += even * j;

          if(j % 2 != 0)
           {
            odd += even;
            even = 0;
           }
        }

         else 
         {
            sum += odd * j;
            if(j % 2 != 0)
            {
              even += odd;
              odd = 0;
            }
         }

      cout << sum << "\n";

      }
      
    }
}

/*
//when you submit it , cause to be TLE
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
      ll n, q;
      cin >> n >> q;
      vector<ll> a(n);
      for(ll i = 0; i < n; i++)
      {
        cin >> a[i];
      }

      for(ll i = 0; i < q; i++)
      {
        ll type, j;
        cin >> type >> j;

        ll sum = 0;
        for(ll i = 0; i < n; i++)
        {
          if(type == 0 && a[i] % 2 == 0)
          {
           a[i] = a[i] + j;
          }

          else if(type == 1 && a[i] % 2 != 0)
           {
             a[i] = a[i] + j;
           }

          sum += a[i];
        }

      cout << sum << "\n";

      }
      
    }
}
*/

/*
Another approach
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;

        ll sumEven = 0, sumOdd = 0;
        ll cntEven = 0, cntOdd = 0;

        for (ll i = 0; i < n; i++) {
            ll x; cin >> x;
            if (x % 2 == 0) 
            { sumEven += x; cntEven++; }
            else             
            { sumOdd  += x; cntOdd++;  }
        }

        while (q--) {
            ll type, j;
            cin >> type >> j;

            if (type == 0) {
                sumEven += cntEven * j;
                // If j is odd, all evens become odd and vice versa
                if (j % 2 != 0) {
                    swap(sumEven, sumOdd);
                    swap(cntEven, cntOdd);
                }
            } else {
                // Add j to all odd elements
                sumOdd += cntOdd * j;
                if (j % 2 != 0) {
                    swap(sumEven, sumOdd);
                    swap(cntEven, cntOdd);
                }
            }

            cout << sumEven + sumOdd << "\n";
        }
    }
}
*/