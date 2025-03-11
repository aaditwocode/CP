#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool isGoodArray(int n, vector<int>& a) {
    if (n == 2) {
        return true;
    }

    map<int, int> freq;
    for (int num : a) {
        freq[num]++;
    }

    if (freq.size() > 2) {
        return false;
    }

    if (freq.size() == 1) {
        return true;
    }

    auto it = freq.begin();
    int cnt1 = it->second;
    it++;
    int cnt2 = it->second;

    if (n % 2 == 0) {
        return cnt1 == cnt2;
    } else {
        return abs(cnt1 - cnt2) == 1;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (isGoodArray(n, a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}