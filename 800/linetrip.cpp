#include <bits/stdc++.h>
using namespace std;
 
int solve(vector<int> &a, int x) {
    int n = a.size();
    int max_dist_between_2_gas_station = max(a[0] - 0, 2 * (x - a[n - 1]));
    for (int i = 1; i < n; i++) {
        max_dist_between_2_gas_station =
            max(max_dist_between_2_gas_station, a[i] - a[i - 1]);
    }
    return max_dist_between_2_gas_station;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;  
 
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << solve(a, x) << "\n"; 
    }
 
    return 0;
}
