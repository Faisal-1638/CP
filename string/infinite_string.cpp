#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while(T--)
    {
    long long X, Y;
    cin >> X >> Y;

    string s = "";

    for (int i = 1; i <= 100000; i++) {
        s += to_string(i);
    }

    int cnt = 0;

    for (long long i = X - 1; i < Y - 1; i++) {
        if (s[i] == '5')
            cnt++;
    }

    cout << cnt << "\n";
}

    return 0;
}