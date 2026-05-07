#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "I love coding";

    int j = 0;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
    }

    s.resize(j);

    cout << s;

    return 0;
}