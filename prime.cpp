#include<bits/stdc++.h>
using namespace std;

bool prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
    if(x%i==0)
     return false;
    }
    return true;
}
int main()
{
   int X;
   cin>>X;

   if(prime(X))
     cout<<"YES\n";

   else
     cout<<"NO\n";

    return 0;
}
