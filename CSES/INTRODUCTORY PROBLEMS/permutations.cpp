#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; ++i)

int main() {
    long long n;
    cin >> n;
    
    if(n == 1){
        cout << "1\n";
        return 0;
    }
    
    if(n <= 3){
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    for(int i = 2; i <= n; i += 2){
        cout << i << " ";
    }
    
    for(int i = 1; i <= n; i += 2){
        cout << i << " ";
    }
    
    cout << "\n";
    return 0;
}