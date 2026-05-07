#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "I love coding";
    string ans = "";

    for (char c : s) {
        if (c != ' ')
            ans += c;
    }

    cout << ans;

    return 0;
}

/*
⏱ Time Complexity
Loop runs through all characters once:
O(n)
💾 Space Complexity
Extra string ans stores result:
O(n)
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "I love coding";

   auto ns = remove(s.begin(), s.end(), ' ');
     s.erase(ns, s.end());

    cout << s;

    return 0;
}

Time Complexity
remove() traverses the string once → O(n)
erase() removes remaining characters → O(n)

Overall: O(n)

💾 Space Complexity
No extra string used.
O(1)
*/

/*
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
*/

