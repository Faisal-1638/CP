#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;   

        if (arr[mid] == key)
            return true;         

        else if (key < arr[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }

    return false;  
}

int main()
{
    int N, Q; 
    cin >> N >> Q;
    vector<int> arr(N);
     for(int i = 0; i < N; i++)
     {
        cin >> arr[i];
     }

     sort(arr.begin(), arr.end());

     while(Q--)
     {
        int key;
        cin >> key;
       bool result = binarySearch(arr, key);
        if (result)
          cout <<"found" << "\n";
            else
              cout << "not found" << "\n";
     }

    
    return 0;
}

