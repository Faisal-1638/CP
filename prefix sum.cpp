#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int a[] = {2, 4, 6, 8, 10};
    int p[n];

    p[0] = a[0];
    for(int i = 1; i < n; i++) {
        p[i] = p[i - 1] + a[i];
    }

    int l = 1, r = 3;
    int sum = p[r] - (l > 0 ? p[l - 1] : 0);

    cout << "Sum from index " << l << " to " << r << " = " << sum;
    return 0;
}

