// it only print the last occurrence of a string char, ignore initial existing
//You only need a set (or an array of 256 booleans).
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string ans = "";
    set<char> used;

    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(used.find(s[i]) == used.end())
        {
            ans += s[i];
            used.insert(s[i]);
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}


/*
bool used[256] = {};

for(int i = s.size() - 1; i >= 0; i--)
{
    if(!used[(unsigned char)s[i]])
    {
        ans += s[i];
        used[(unsigned char)s[i]] = true;
    }
}
*/