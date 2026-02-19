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

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> sorted = a;
        sort(sorted.begin() + 1, sorted.end());

        unordered_map<int, vector<int>> groups;

        for (int i = 1; i <= n; i++) 
        {
            int x = i;
            while (x % 2 == 0)
                x /= 2;
            groups[x].push_back(i);
        }

        bool possible = true;

        for (auto &g : groups) 
        {
            vector<int> original_values;
            vector<int> sorted_values;

            for (int idx : g.second) 
            {
                original_values.push_back(a[idx]);
                sorted_values.push_back(sorted[idx]);
            }

            sort(original_values.begin(), original_values.end());
            sort(sorted_values.begin(), sorted_values.end());

            if (original_values != sorted_values) 
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
