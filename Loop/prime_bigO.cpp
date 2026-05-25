#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(ll n)
{
    if(n<2) 
      return false;

    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
          return false;
    }

    return true;
}


int main()
{
    ll N;
    cin>>N;

    if(prime(N))
     cout<<"YES\n";

     else 
      cout<<"NO\n";

return 0;

}

/*
A number always has factors in pairs.

Example:

36=1×36
36=2×18
36=3×12
36=4×9
36=6×6

After √36 = 6, factors start repeating.

So if a divisor exists larger than √n, another divisor smaller than √n must already exist.

That is why checking after √n is unnecessary.

Example:

For n = 49

49
	​

=7

Checking:

2,3,4,5,6,7

is enough.

At 7, we find:

49 % 7 == 0

So 49 is not prime.

No need to check 8...48.

3. Why ll is important

You used:

typedef long long ll;

Good for large input.

Because int stores only up to about:

2×10
9

But long long can store up to about:

9×10
18
4. One More Important Thing

For extremely large numbers, this condition:

i*i <= n

can overflow.

Safer version:

i <= n / i

So professional code often uses:

for(ll i=2; i<=n/i; i++)

Your algorithm complexity:

O(
n
	​

)

Efficient for most competitive programming problems.
*/