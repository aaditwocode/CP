#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

int main() {
    long long n;
    int i;
    cin >> n;

    vector<long long> arr(n-1);  
    
    rep(i, n-1){  
       cin >> arr[i];   
    }

    sort(arr.begin(), arr.end());

    rep(i, n-1){
       if(arr[i] != i + 1){
           cout << i + 1 << "\n";
            return 0;
       }
    }
    
    cout << n << "\n";
    
    return 0;
}