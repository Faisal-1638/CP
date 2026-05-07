#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int count=1,maxcount=1;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
            maxcount=max(maxcount,count);
        }

       else 
         count=1;
    }

    if(maxcount>=7)
      cout<<"YES";
     else 
      cout<<"NO";

return 0;

}