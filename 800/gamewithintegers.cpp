#include <iostream>
using namespace std;
 
int main() {
    long t;
    cin >> t; 
 
    while (t--) {
        long x;
        cin >> x; 
 
        if (x % 3 == 0) {
            cout << "Second" << endl;
        } else {
            cout << "First" << endl;
        }
    }
 
    return 0;
}