#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();
    insertAtBottom(st, x);
    st.push(temp);
}

void reverseStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }

    int topElement = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, topElement);
}

void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {

    stack<int> st1;
    st1.push(3);
    st1.push(2);
    st1.push(1);
    //printStack(st1);
    reverseStack(st1);
    printStack(st1); 
    
    return 0;
}
