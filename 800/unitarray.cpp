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
        
        int cntminusone = 0, cntplusone = 0;
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            if (val == -1) {
                cntminusone++;
            } else {
                cntplusone++;
            }
        }
        
        int operations = 0;
        
        while (cntplusone < cntminusone) {
            cntminusone--;
            cntplusone++;
            operations++;
        }
        
        if (cntminusone % 2 != 0) {
            operations++;
        }
        
        cout << operations << "\n";
    }
    return 0;
}
