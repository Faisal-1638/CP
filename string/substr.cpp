#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string x,s;
        cin>>x>>s;

        string cur=x;
        int pos=0;
        bool found=false;
        while(cur.size()<100)
        {
            if(cur.find(s)!=string::npos)
            {
                found=true;
                break;
            }

            cur+=cur;
            pos++;
        }

        if(found)
         cout<<pos<<"\n";

         else 
           cout<<-1<<"\n";

    }


    return 0;
}
