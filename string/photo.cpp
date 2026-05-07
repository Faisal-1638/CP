#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

        bool color=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                char x;
                cin>>x;
                if(x!='W' && x!='B' && x!='G')
                color=true;
            }
        }
        
    if(color)
    cout<<"#Color"<<"\n";

    else
        cout<<"#Black&White"<<"\n";


    return 0;
}
