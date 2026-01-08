#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (i = 0; i < n; ++i)

int main() {
    long long n;
    int i;
    cin >> n;

    vector<long long> arr(n);  
    
    rep(i, n){  
       cin >> arr[i];   
    }

    long long moves = 0;

    rep(i, n-1){  
       if(arr[i+1] < arr[i]){
           moves += arr[i] - arr[i+1];
           arr[i+1] = arr[i];
       }
    }
    
    cout << moves << "\n";
    
    return 0;
}