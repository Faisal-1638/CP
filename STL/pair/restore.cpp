#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long,int>> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }

        vector<long long> b(n);

        for(int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<long long> ans(n);

        for(int i = 0; i < n; i++)
        {
            ans[a[i].second] = b[i];
        }

        for(int i = 0; i < n; i++)
            cout << ans[i] << " ";

        cout << '\n';
    }
}