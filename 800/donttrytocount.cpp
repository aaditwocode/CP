#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(string x, string s) {
    int count = 0;
    bool found = false;

    for (int i = 0; i <= 6; i++) {
        if (x.find(s) != string::npos) {
            found = true;
            break;
        }
        x += x;
        count++;
    }

    if (found) {
        cout << count << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    FAST_IO
    int t;
    if (cin >> t) {
        while (t--) {
            int n, m;
            cin >> n >> m;
            string x, s;
            cin >> x >> s;
            solve(x, s);
        }
    }
    return 0;
}
