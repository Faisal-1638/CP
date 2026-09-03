#include <bits/stdc++.h>
using namespace std;

int main() {
     int n,q;
     cin >> n >> q;

    vector<long long> a(n), pre(n, 0);

    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    pre[0] = a[0];
    for(int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + a[i];
    }

    for(int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        long long sum;
        if(l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }
        
           cout << sum << "\n";
    }

    return 0;
}
/*
1 based index

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> a(n + 1);
    vector<long long> pref(n + 1, 0);

    // Input array (1-based)
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        long long rangeSum = pref[r] - pref[l - 1];

        cout << rangeSum << '\n';
    }

    return 0;
}

*/

