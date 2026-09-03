#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
        {
           cin >> v[i];
        }

           int expected = 1;
           for(int i = 0; i < n; i++)
           {
             if(v[i] == expected)
             {
                expected++;
             }
           }

           int len = expected - 1;
           int ans = (n - len + k - 1) / k;

           cout << ans << "\n";
           
    }  

    return 0;
}