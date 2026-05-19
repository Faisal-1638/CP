#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
   // priority_queue<int, vector<int>, greater<int>> pq; // for make a min priority queue


    // Insert
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl;

    pq.pop();

    cout << "After deletion top: " << pq.top() << endl;

    return 0;
}