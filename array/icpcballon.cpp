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
   sort(s.begin(),s.end());
   char prev=s[0];
   int cnt=2;
   for(int i=1; i<n; i++)
   {
     if(s[i]!=prev)
     {
       cnt+=2;
       prev=s[i];
     }
      else
        cnt++;
   }

   cout<<cnt<<"\n";
 }

return 0;
}
