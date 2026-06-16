#include <bits/stdc++.h>
using namespace std;

int main() 
{
        int t;
        cin >> t;

        while(t--)
        {
            int n;
            cin >> n;

            string s;
            cin >> s;

            int mx = 1;
            int cnt = 1;
            for(int i = 1; i < n; i++)
            {
                if(s[i] == s[i - 1])
                    cnt++;

                   else
                     cnt = 1;

                    mx = max(mx, cnt);
            }

            cout << mx + 1 << "\n";
        }
       
    }
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int inc = 0, dec = 0;
        int ans = 1;

        for(char c : s)
        {
            if(c == '<')
            {
                inc++;
                dec = 0;
            }
            else
            {
                dec++;
                inc = 0;
            }

            ans = max(ans, max(inc, dec));
        }

        cout << ans + 1 << "\n";
    }
}
*/