#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(ll n)
{
    if(n<2) 
      return false;

    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
          return false;
    }

    return true;
}


int main()
{
    ll N;
    cin>>N;

    if(prime(N))
     cout<<"YES\n";

     else 
      cout<<"NO\n";

return 0;

}