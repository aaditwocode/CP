#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        int robinGold = 0;
        int count = 0;
 
        for (int i = 0; i < n; ++i) {
            if (a[i] >= k) {
                robinGold += a[i];
            } else if (a[i] == 0) {
                if (robinGold > 0) {
                    robinGold--;
                    count++;
                }
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}