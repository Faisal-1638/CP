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

        string s;
        cin>>s;

        int wlen=s.size();

        int len=0,count=0,maxlen=0;
        for(int i=0; i<wlen; i++)
        {
            if(s[i]=='.')
            {
             len++;
             count++;
             maxlen=max(len,maxlen);
            }

            else
             len=0;
        }

        if(maxlen>=3)
          cout<<"2"<<"\n";
        else
          cout<<count<<"\n";

    }

return 0;

}