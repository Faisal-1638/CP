#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            if(p[i] != i + 1)
                pos.push_back(i);
        }

        if(pos.empty())
        {
            cout << "YES\n";
            continue;
        }

        int m = pos.size();
        bool f = true;
        for(int i = 0; i < m; i++)
        {
            if(p[pos[i]] != pos[m - 1 - i] + 1)
            {
                f = false;
                break;
            }
        }

        if(f)
         cout << "YES\n";
         else 
          cout << "NO\n";
    }

    return 0;
}