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

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int opr = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if ((v[i] % 2) == (v[i + 1] % 2))
            {
                opr++;
            }
        }

        cout << opr << "\n";
    }

    return 0;
}

/*
Example
InputCopy
3
5
1 7 11 2 13
4
1 2 3 4
6
1 1 1 2 2 3

Output
2
0
3
*/