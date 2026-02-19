#include<bits/stdc++.h>
using namespace std;

long long sumdigit(long long a)
{
    long long sum=0;
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }

    return sum;

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long x;
        cin>>x;
        
        int count=0;
        for(long long i=x+1; i<x+90; i++)
        {
           
            if(i-sumdigit(i)==x)
            {
                count++;
            }

        }

        cout<<count<<"\n";
    }

    return 0;
}