#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (long long k = 1; k <= n; k++) {
     
        long long total = (k * k) * (k * k - 1) / 2;
        
        long long attack = 4 * (k - 1) * (k - 2);

        long long ways = total - attack;
        
        cout << ways << endl;  
    }
    
    return 0;
}