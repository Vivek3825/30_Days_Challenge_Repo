#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int leng(string s) {
    unordered_map<char, int> lastSeen;
    int maxLength = 0;
    int start = 0;

    for (int end = 0; end < s.length(); end++) {
        char currentChar = s[end];

        if (lastSeen.find(currentChar) != lastSeen.end() && lastSeen[currentChar] >= start) {
            start = lastSeen[currentChar] + 1;
        }
        
        lastSeen[currentChar] = end;
        
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    string S;

    cout << "Enter string: ";
    cin >> S;

    cout << "Length of longest substring without repeating characters: " 
         << leng(S) << endl;

    return 0;
}
