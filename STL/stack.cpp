#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;   // 30 (peek)
    cout << st.size() << endl;  // 3

    st.pop();  // Remove top

    cout << st.top() << endl;   // 20

    // Traverse (destructive)
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    // Output: 20 10
}