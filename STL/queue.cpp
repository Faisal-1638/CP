#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.front() << endl;  // 10
    cout << q.back() << endl;   // 50
    cout << q.size() << endl;   // 5

    q.pop();  // Remove front

    cout << q.front() << endl;  // 20

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    // Output: 20 30 40 50 
}