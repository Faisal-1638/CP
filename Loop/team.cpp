#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    vector<int>y(n);
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>y[i];
    }

    for(int i=0; i<n;i++)
    {
        if(5-y[i]>=k)

            cnt++;
    }

    cout<<cnt/3<<"\n";

   return 0;

}

