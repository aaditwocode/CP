#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int max_block = 0, current_block = 0, total_dots = 0;

    for (char c : s) {
        if (c == '.') {
            total_dots++;
            current_block++;
            max_block = max(max_block, current_block);
        } else {
            current_block = 0;
        }
    }

    if (max_block >= 3) {
        cout << 2 << "\n";
    } else {
        cout << total_dots << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
