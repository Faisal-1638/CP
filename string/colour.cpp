#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;

        string a="",b="";

        for(int i=0; i<n; i++)
        {
            if(!((s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G')))
            {
                a+=s1[i];
                b+=s2[i];
            }
             
        }

        if(a.empty()) {
            cout << "YES\n";
            continue;
        }
        if(a==b)
         cout<<"YES\n";
         
        else
         cout<<"NO\n";
    }

    return 0;
}
