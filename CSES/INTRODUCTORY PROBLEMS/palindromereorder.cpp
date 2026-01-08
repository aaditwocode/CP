#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> charCount;
    
    for (char c : s) charCount[c]++;

    int oddCount = 0;
    for (auto &entry : charCount) {
        if (entry.second % 2 == 1) oddCount++;
    }
    
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    vector<char> halfPalindrome;
    vector<char> middleChars;

    for (auto &entry : charCount) {
        int count = entry.second;
        if (count % 2 == 0) {
            for (int i = 0; i < count/2; i++) {
                halfPalindrome.push_back(entry.first);
            }
        } else {
            for (int i = 0; i < count/2; i++) {
                halfPalindrome.push_back(entry.first);
            }
            middleChars.push_back(entry.first);
        }
    }
    
    sort(halfPalindrome.begin(), halfPalindrome.end());
    
    for (char c : halfPalindrome) cout << c;
    if (!middleChars.empty()) cout << middleChars[0];
    for (int i = halfPalindrome.size()-1; i >= 0; i--) cout << halfPalindrome[i];
    cout << "\n";
    
    return 0;
}