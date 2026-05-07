#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 2, 5, 4, 9, 2};

    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        bool visible = true;

        // check right side
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] >= arr[i])
            {
                visible = false;
                break;
            }
        }

        if(visible)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 5, 4, 3, 2};
    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        bool visible = true;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] >= arr[i])
            {
                visible = false;
                break;
            }
        }

        if(visible)
        {
            cout << i << " ";   // print index directly
        }
    }

    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 5, 4, 3, 2};

    vector<int> ans;
    int mx = -1;

    for(int i = arr.size() - 1; i >= 0; i--)
    {
        if(arr[i] > mx)
        {
            ans.push_back(arr[i]);
            mx = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());

    for(int x : ans)
    {
        cout << x << " ";
    }
}

Time : O(N)
space O(N)
*/