#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int countt(const string& s, int k) {
    int n = s.length();
    unordered_map<char, int> freq;
    int left = 0, right = 0, count = 0;

    for (right = 0; right < n; ++right) {
        freq[s[right]]++;

        while (freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }
            left++;
        }

        count += (right - left + 1);
    }

    return count;
}

int countKDistinct(const string& s, int k) {
    return countt(s, k) - countt(s, k - 1);
}

int main() {
    string s1 = "pqpqs";
    int k1 = 2;
    cout << "Output: " << countKDistinct(s1, k1) << endl;

    return 0;
}
