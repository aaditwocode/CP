#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;  
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        int operations = 0;
        
        if (k == 1) {
            operations = n;
        } else {
            while (n > 0) {
                operations += n % k;
                n /= k;
            }
        }
 
        cout << operations << endl;  
    }
 
    return 0;
}