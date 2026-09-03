#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    
    ll n,q;
    cin >> n >> q;

    vector<ll> x(n + 1), pre(n + 1, 0);

    for(ll i = 1; i <= n; i++)
      cin >> x[i];

      for(ll i = 1; i <= n; i++)
      {
        pre[i] = x[i] + pre[i - 1];
      }
    
      while(q--)
      {
        ll a,b;
        cin >> a >> b;

          cout << pre[b] - pre[a - 1] << "\n";

      }


    return 0;
}