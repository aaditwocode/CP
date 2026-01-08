#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        ll k;
        cin >> k;
        
        ll digit_len = 1;
        ll numbers_in_block = 9;
        ll block_start = 1;
        
        while(k > digit_len * numbers_in_block) {
            k -= digit_len * numbers_in_block;
            digit_len++;
            numbers_in_block *= 10;
            block_start *= 10;
        }

        ll number = block_start + (k - 1) / digit_len;

        ll pos_in_number = (k - 1) % digit_len;

        string s = to_string(number);
        cout << s[pos_in_number] << "\n";
    }
    
    return 0;
}