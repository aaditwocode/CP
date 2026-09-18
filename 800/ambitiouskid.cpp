#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
 
void solve(vector<int>& a) {
    if (a.empty()) return; 
    for(auto &it: a){
        it = abs(it);
    }
    int minele = *min_element(a.begin(), a.end());
    cout << minele << "\n";
}
 
int main() {
    FAST_IO
    int n;
    if (cin >> n) { 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        solve(a);
    }
    return 0;
}
