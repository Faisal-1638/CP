//https://codeforces.com/contest/1666/problem/D
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

        unordered_map<char, int> need;

        for(char c : t)
        {
            need[c]++;
        }

        string ans = "";

        for(int i = x - 1; i >= 0; i--)
        {
           if(need[s[i]] > 0)
           {
            ans += s[i];
            need[s[i]]--;
           }
        }

        reverse(ans.begin(), ans.end());
         

        if(ans == t)
            cout << "YES\n";

            else 
              cout << "NO\n";   
    }
}

/*

Input
6
DETERMINED TRME
DETERMINED TERM
PSEUDOPSEUDOHYPOPARATHYROIDISM PEPA
DEINSTITUTIONALIZATION DONATION
CONTEST CODE
SOLUTION SOLUTION

Output
YES
NO
NO
YES
NO
YES
*/