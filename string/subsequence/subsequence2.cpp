//  Keep only the last occurrence of each character with new string ans,
//  Check whether t is a subsequence of ans
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        string s, t;
        cin >> s >> t;

        int x = s.size();
        int y = t.size();

        set<char> seen;
        string ans = "";

        // Keep only the last occurrence of each character
        for(int i = x - 1; i >= 0; i--)
        {
            if(seen.find(s[i]) == seen.end())
            {
                ans += s[i];
                seen.insert(s[i]);
            }
        }

        reverse(ans.begin(), ans.end());

        int j = 0;

        for(char c : ans)
        {
            if(j < y && c == t[j])
                j++;
        }

        if(j == y)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}