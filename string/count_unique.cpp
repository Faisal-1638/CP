#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);

    set<int> st;
    
    for(int c : s)
    {
        if(c >= 'a' && c <= 'z')
        {
            st.insert(c);
        }
    }

    cout << st.size() << "\n";

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<bool> seen(26, false);
    int cnt = 0;

    for(char c : s) {
        if(c >= 'a' && c <= 'z') {
            if(!seen[c - 'a']) {
                seen[c - 'a'] = true;
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
*/