#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   long long n;
   cin >> n;

   if(n > 0)
   {
    cout << n ;
    return 0;
   }

   int ans1 = n / 10;
   int lastdigit = n % 10;
   int rem = n / 100;
   int ans2 = rem * 10 + lastdigit;

   if(abs(ans1) < abs(ans2))
    cout << ans1;

    else 
     cout << ans2;

    return 0;
}