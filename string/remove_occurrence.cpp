#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string s = "ababca";
    char c = 'a';
  
    // Remove all occurrences of 'c' from 's'
    s.erase(remove(s.begin(), s.end(), c), s.end());

    cout << s;
    
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "banana";
    char ch = 'a';

    string ans = "";

    for (char c : s) {
        if (c != ch)
            ans += c;
    }

    cout << ans;

    return 0;
}
*/