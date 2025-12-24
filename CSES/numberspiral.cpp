#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll row, col;
        cin >> row >> col;
        
        ll layer = max(row, col);
        ll value;
        
        if (layer % 2 == 0) {
            
            if (row == layer) {
             
                value = layer * layer - (col - 1);
            } else {
               
                value = (layer - 1) * (layer - 1) + row;
            }
        } else {
          
            if (col == layer) {
             
                value = layer * layer - (row - 1);
            } else {
              
                value = (layer - 1) * (layer - 1) + col;
            }
        }
        
        cout << value << "\n";
    }
    
    return 0;
}