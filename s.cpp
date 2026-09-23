#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
   int t;
   cin >> t;

   while(t--)
   {
      ll n,x;
      cin >> n >> x;
      vector<int> v(n);

      ll sm = 0;
      for(int i = 0 ; i < n; i++)
      {
         cin >> v[i];
         sm += v[i];
      }

      ll sum1 = 0;
      for(int i = 0; i < n; i++)
      {
         v[i] = ceil((double)v[i] / x);
         sum1 += v[i];
      }

      ll ans1 = sum1;
      ll ans2 = ceil((double)sm / x);

      cout << ans2 << " " << ans1 << "\n";

   } 
     
     return 0;
}