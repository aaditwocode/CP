#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

int main() {
    ll n;
    cin >> n;
   
    while(n--){
        ll a, b;
        cin >> a >> b;
        ll total = a + b;
        if(total % 3 == 0 && min(a, b) * 2 >= max(a, b)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}