#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
          for(int i=0; i<N; i++)
          {
              cout<<A[i]<<" ";
          }

          for(int i = 0; i < N; i++)
          {
             int currentMax = A[i];
             for(int j = i+1; j < N; j++)
             {
                currentMax = max(currentMax, A[j]);
                cout<<currentMax<<" ";
             }
          }
        cout<<"\n";
    }

    return 0;
}



/*
i = 0

Start with

currentMax = A[0] = 1
print → 1
j = 1

Compare

A[0] vs A[1]
1 vs 6
currentMax = 6
print → 6
j = 2

Compare

currentMax vs A[2]
6 vs 3
currentMax = 6
print → 6
j = 3

Compare

currentMax vs A[3]
6 vs 7
currentMax = 7
print → 7

Output so far

1 6 6 7
i = 1

Start

currentMax = A[1] = 6
print → 6
j = 2

Compare

6 vs 3
currentMax = 6
print → 6
j = 3

Compare

6 vs 7
currentMax = 7
print → 7

Output added

6 6 7
i = 2

Start

currentMax = A[2] = 3
print → 3
j = 3

Compare

3 vs 7
currentMax = 7
print → 7

Output added

3 7
i = 3

Start

currentMax = A[3] = 7
print → 7
Final Output
1 6 6 7 6 6 7 3 7 7

✅ Important idea

The comparison order by index is:

(0,1)
(0,2)
(0,3)
(1,2)
(1,3)
(2,3)

But instead of comparing A[i] with every A[j], it compares

currentMax with A[j]

so the maximum updates gradually.

3️⃣ Total Inner Loop Runs

Total executions:

(N-1) + (N-2) + (N-3) + ... + 1

This is the sum of numbers:

= N(N-1)/2
4️⃣ Time Complexity

Total operations ≈

N(N-1)/2

So complexity is

O(N²)
5️⃣ Example (N = 5)
i	j runs	times
0	1 2 3 4	4
1	2 3 4	3
2	3 4	2
3	4	1
4	-	0

Total = 4 + 3 + 2 + 1 = 10

✅ Conclusion

Inner loop does NOT run N times for each i.

It runs:

N-1, N-2, N-3 ... 1

Total ≈ N² / 2 → O(N²).

*/