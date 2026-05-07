#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Insert
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.insert(v.begin() + 1, 15);  // Insert at index 1

    // Access
    cout << v[0] << endl;         // 10
    cout << v.front() << endl;    // 10
    cout << v.back() << endl;     // 30
    cout << v.size() << endl;     // 4

    // Delete
    v.pop_back();                 // Remove last
    v.erase(v.begin());           // Remove first

    // Traverse
    for(int x : v) cout << x << " ";  // 15 20

    // 2D Vector
    vector<vector<int>> matrix(3, vector<int>(3, 0));
    matrix[1][1] = 5;
}