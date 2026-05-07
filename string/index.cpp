#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    string target="";
    for(int i=0; i<n; i++)
    {
        cin>>s;
        int len=s.size();
        target+=s[len-1];
    }

    cout<<target;

}