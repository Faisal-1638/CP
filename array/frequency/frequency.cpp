#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int>v(N);

    for(int i=0; i< N; i++)
    {
        cin>>v[i];
    }

    map<int,int>freq;

    for(int i=0; i< N; i++)
    {
        freq[v[i]]++;
    }

    for(auto x : freq)

    {
        cout<<x.first<<" occurs "<<x.second<<" times"<<endl;
    }


    return 0;

}

