#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFac(int N) {
    vector<int> factors;

    while (N % 2 == 0) {
        factors.push_back(2);
        N /= 2;
    }

    for (int i = 3; i * 1LL * i <= N; i += 2) {
        while (N % i == 0) {
            factors.push_back(i);
            N /= i;
        }
    }
    
    if (N > 1) {
        factors.push_back(N);
    }

    return factors;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    vector<int> result = primeFac(N);

    cout << "Prime factors: ";
    for (int factor : result) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
