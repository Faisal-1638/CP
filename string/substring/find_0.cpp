#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt = 0;

        for(int i = 0; i < n; i += k)
        {
            if(s.substr(i, k).find('0') == string::npos)
                cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}