// simple subsequnce problem, whether a string t exist in subsequence of string s

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

        int j = 0;

        for(char c : s)
        {
            if(j < t.size() && c == t[j])
            {
                j++;
            }
        }

        if(j == t.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}