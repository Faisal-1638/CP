#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> c(n);
        vector<long long> s(n);

        for (int i = 0; i < n; i++)
            cin >> c[i];

        for (int i = 0; i < n; i++)
            cin >> s[i];

        vector<long long> sum(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            sum[c[i]] += s[i];
        }

        vector<long long> v;

        for (int i = 1; i <= n; i++)
        {
            if (sum[i] > 0)
                v.push_back(sum[i]);
        }

        sort(v.rbegin(), v.rend());

        long long bob = 0;

        for (int i = 1; i < (int)v.size(); i += 2)
        {
            bob += v[i];
        }

        cout << bob << '\n';
    }

    return 0;
}