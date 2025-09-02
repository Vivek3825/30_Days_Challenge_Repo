#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int evaluatePostfix(const string& expression) {
    stack<int> stk;
    istringstream iss(expression);
    string token;

    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            
            int b = stk.top(); stk.pop();
            int a = stk.top(); stk.pop();
            int result = 0;

            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") {
                
                result = a / b;
            }

            stk.push(result);
        } else {
            
            stk.push(stoi(token));
        }
    }

    return stk.top();
}

int main() {
    
    cout << evaluatePostfix("2 1 + 3 *") << endl;                 // Output: 9
    cout << evaluatePostfix("5 6 +") << endl;                     // Output: 11
    cout << evaluatePostfix("-5 6 -") << endl;                    // Output: -11
    cout << evaluatePostfix("15 7 1 1 + - / 3 * 2 1 1 + + -") << endl;  // Output: 5
    cout << evaluatePostfix("5") << endl;                         // Output: 5

    return 0;
}
