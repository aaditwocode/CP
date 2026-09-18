#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int total_points = 0;
    
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            char cell;
            cin >> cell;
            
            if (cell == 'X') {
           
                int dist_row = (i > 5) ? (11 - i) : i;
                int dist_col = (j > 5) ? (11 - j) : j;
                
                
                total_points += min(dist_row, dist_col);
            }
        }
    }
    
    cout << total_points << "\n";
}

int main() {
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
