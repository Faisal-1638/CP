#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   ll n;
   cin >> n;

   vector<ll> v(n);

   for(int i = 0; i < n; i++)
   {
      cin >> v[i];
   }

 
   int mn = INT_MAX, mx = INT_MIN;
   for(int i = 0; i < n; i++)
   {
      if(v[i] < mn)
       mn = v[i];

       if(v[i] > mx)
        mx = v[i];
   }

    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
         if(v[i] > mn && v[i] < mx)
            cnt++;
    }


    cout << cnt << "\n";
    
       return 0;
}