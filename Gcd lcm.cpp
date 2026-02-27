#include<iostream>
using namespace std;
int main()
{
    long long A,B;
    cin>>A>>B;

    long long num1=A,num2=B;

    while(B!=0)
    {
        int rem=A%B;
        A=B;
        B=rem;
    }

    long long gcd=A;
    long long lcm=num1*num2/gcd;
    cout<<gcd<<" "<<lcm;

}
