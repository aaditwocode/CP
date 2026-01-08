#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)

int main() {
    string s;
    cin >> s;
   
    int i = 0;
    int count = 1; 
    int ans = 1;  
    int n = s.length();

    while(i < n){
        int j = i + 1;
        count = 1; 
        
        while(j < n && s[i] == s[j]){
            j++;
            count++;
        }
        
        ans = max(count, ans);  
        i = j;  
    }
    
    cout << ans << endl;
    return 0;
}