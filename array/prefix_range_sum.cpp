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
vector<long long> pre(n + 1, 0);

for(int i = 1; i <= n; i++) {
    cin >> a;
    pre[i] = pre[i - 1] + a;
}

while(q--) {
    int l, r;
    cin >> l >> r;

    cout << pre[r] - pre[l - 1] << '\n';
}
*/

