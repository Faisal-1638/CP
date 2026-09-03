#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        string s;
        cin >> s;

        int sz = s.size();
        string temp = s;

        for (int i = 0; i < sz; i++) 
        {
            int next = (i + 1) % sz;

            if (s[i] == '1' && s[next] == '0')
            {
                temp[i] = '0';
                temp[next] = '1';
            }
        }

        int red = 0;
        int blue = 0;

        for (int i = 0; i < sz; i++) 
        {
            if (temp[i] == '1') {
                if (i % 2 == 0)
                    blue++;
                else
                    red++;
            }
        }

        cout << red << " " << blue << '\n';
    }

    return 0;
}