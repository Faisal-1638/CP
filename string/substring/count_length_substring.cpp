//https://codeforces.com/contest/977/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
     cin >> n;

     string s;
     cin >> s;

     map<string, int>mp;

     for(int i = 0; i < n - 1; i++)
     {
        string x = s.substr(i, 2);
        mp[x]++;
     }

     int mx = 0;
     string ans = "";
     for(auto x : mp)
     {
        if(x.second > mx)
        mx = x.second;
        ans = x.first;
     }

     cout << ans << "\n";

     return 0;
}