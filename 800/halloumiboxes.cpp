#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &a, int k) {
    if (k > 1) return true; 

    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    return sorted_a == a;  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << (solve(a, k) ? "YES" : "NO") << "\n";
    }
    return 0;
}

