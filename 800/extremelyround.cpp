#include <iostream>
using namespace std;

int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int count = 0;
        
        for (int d = 1; d <= 9; ++d) {
            int val = d;
            while (val <= n) {
                ++count;
                val *= 10; 
            }
        }
        cout << count << "\n";
    }
    return 0;
}