#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (c % 2 == 0) {
            if (a > b) cout << "First\n";
            else cout << "Second\n";
        } else {
            if (b > a) cout << "Second\n";
            else cout << "First\n";
        }
    }
    return 0;
}
