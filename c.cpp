#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--)
    {

       long long x,y,k;
       cin >> x >> y >> k;

       long long diff = y - x;
       long long work = 0, divisor = 0;

       int mn = min(diff, k);
       for(int i = 0; i < mn; i++)
       {
            work += y % x;
            x++;
            y++;
            divisor++;
       }

       cout << work + diff * (k - divisor) << "\n";
       

    }

    return 0;
}