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

            int mx = 0;
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