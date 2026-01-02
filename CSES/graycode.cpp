#include <bits/stdc++.h>
using namespace std;

vector<string> solveGrayCode(int n) {
    if (n == 1) return {"0", "1"};
    
    vector<string> a = solveGrayCode(n - 1);  
    vector<string> b = a;
    reverse(b.begin(), b.end());
    
    for (auto &x : a) x = "0" + x;
    for (auto &x : b) x = "1" + x;
    
    
    a.insert(a.end(), b.begin(), b.end());
    return a;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> result = solveGrayCode(n);
    for (string code : result) {
        cout << code << "\n";  
    }
    
    return 0;
}