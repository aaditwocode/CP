#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int cnt = 0, maxcnt = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                cnt++;
            } else {
                maxcnt = max(maxcnt, cnt);
                cnt = 0;
            }
        }
        maxcnt = max(maxcnt, cnt);
        cout << maxcnt << "\n";
    }
    return 0;
}
