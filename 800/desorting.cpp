#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long min_ops = LLONG_MAX;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            cout << 0 << "\n";
            return;
        }
        long long gap = a[i] - a[i - 1];
        min_ops = min(min_ops, gap / 2 + 1);
    }

    cout << min_ops << "\n";
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
