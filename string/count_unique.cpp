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

*/