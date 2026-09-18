//**Approach A: The Boolean Array (High Space)**
//Create an extra array `seen` to mark which numbers appear.

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    vector<bool> seen(n + 1, false); // Creates N+1 new variables

    // Mark present numbers
    for (int x : nums) {
        seen[x] = true;
    }

    // Find the missing number
    for (int i = 0; i <= n; i++) {
        if (!seen[i]) {
            return i;
        }
    }

    return -1; // safety (won't happen for valid input)
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << missingNumber(v);
}

/*
Time Complexity: O(N)
Space Complexity: O(N) (extra array grows with input size)
*/

/*

**Approach B: The Sum Formula (Optimal Space)**

**Idea:** The sum of numbers from `0` to `N` is known. So The missing number is:


(expectedsum) − (actualsum)

**Code:**


int missingNumber(vector<int>& nums) {
    int n = nums.size();
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    for (int x : nums) {
        actualSum += x;
    }

    return expectedSum - actualSum;
}
Time Complexity: O(N).
Space Complexity: O(1). 
We only used two variables (expectedSum, actualSum). 
The memory usage is constant regardless of N.
*/

