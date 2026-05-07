#include <bits/stdc++.h>
using namespace std;

int main() 
{

    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for(char c : s) 
    {

        c = tolower(c);

        if(c >= 'a' && c <= 'z') 
        {
            freq[c - 'a']++;
        }
    }

    bool pangram = true;

    for(int i = 0; i < 26; i++) 
    {

        if(freq[i] == 0) 
        {
            pangram = false;
            break;
        }
    }

    if(pangram)
        cout << "Pangram";
    else
        cout << "Not Pangram";

    return 0;
}

/*
Time O(n)
space O(1)
*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    string s;
    cin >> s;

    bool seen[26] = {0};

    for(char c : s) {

        c = tolower(c);

        if(c >= 'a' && c <= 'z') {
            seen[c - 'a'] = true;
        }
    }

    bool ok = true;

    for(int i = 0; i < 26; i++) {

        if(!seen[i]) {
            ok = false;
            break;
        }
    }

    if(ok)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
*/

/*
using set

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    cin >> input;

    set<char> s;

    for (char c : input) 
    {
        s.insert(tolower(c)); 
    }

    if (s.size() == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

Time O(log n)
space O(1)
*/