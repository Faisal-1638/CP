#include<bits/stdc++.h>
using namespace std;
int main()
{
    string N;
    cin>>N;

    size_t pos= N.find('.');

    if(pos==string::npos)
     cout<<"int "<<N<<"\n";

     else
     {
        string intpart= N.substr(0,pos);
        string fpart= N.substr(pos+1);

        bool integer=true;
        for(char c : fpart)
        {
            if(c!='0')
            {
                integer=false;
                break;
            }

        }

         if(integer)
          cout<<"int "<<intpart<<"\n";

          else 
           cout<<"float "<<intpart<<" 0."<<fpart<<"\n";

     }



     return 0;
}