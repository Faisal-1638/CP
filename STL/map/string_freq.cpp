#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<string> a(n), b(n), c(n);

        unordered_map<string, int> mp;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

            for(int i = 0; i < n; i++)
            {
                cin >> b[i];
                mp[b[i]]++;
            }

                for(int i = 0; i < n; i++)
                {
                    cin >> c[i];
                    mp[c[i]]++;
                }

    int p1 = 0, p2 = 0, p3 = 0;
    for(int i = 0; i < n; i++)
    {
        if(mp[a[i]] == 1)
        p1 += 3;
        else if(mp[a[i]] == 2)
            p1 += 1;
    }

        for(int i = 0; i < n; i++)
        {
            if(mp[b[i]] == 1)
            p2 += 3;
            else if(mp[b[i]] == 2)
                p2 += 1;
        }

            for(int i = 0; i < n; i++)
            {
                if(mp[c[i]] == 1)
                p3 += 3;
                else if(mp[c[i]] == 2)
                    p3 += 1;
            }

            cout << p1 << " " << p2 << " " << p3 << "\n";
    }

    return 0;
}