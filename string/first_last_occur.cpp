#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        int first = -1, last = -1;
        for(int i = 0; i < n ; i++)
        {
            if(v[i] == 1)
             {
                cnt++;
                if(first == -1)
                {
                  first = i;
                }

                  last = i;
                
             }

        }

        if((last - first) + 1 <= x)
              cout << "YES\n";

              else 
               cout << "NO\n";
              
    }

}


