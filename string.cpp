#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;

    while(N--)
    {
        string S, T;
        cin>>S>>T;

        string result="";

        int len=min(S.size(),T.size());

        for(int i=0; i<len; i++)
        {
            result+=S[i];
            result+=T[i];
        }

        if(S.size()>T.size())
        {
            result+=S.substr(len);
        }
        else
        {
            result+=T.substr(len);
        }

        cout<<result<<"\n";
    }



    return 0;
}
