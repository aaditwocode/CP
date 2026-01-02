#include<bits/stdc++.h>
using namespace std;

long long minDiff = LLONG_MAX;

void f(int i, vector<int> &a, vector<int> &b, vector<int> &apples) {
    if (i == apples.size()) {

        long long sumA = 0, sumB = 0;
        for (int x : a) sumA += x;
        for (int x : b) sumB += x;
        

        long long diff = abs(sumA - sumB);
        if (diff < minDiff) {
            minDiff = diff;
        }
        return;
    }
    

    b.push_back(apples[i]);
    f(i + 1, a, b, apples);
    b.pop_back();

    a.push_back(apples[i]);
    f(i + 1, a, b, apples);
    a.pop_back();
}

int main() {
    int n;
    cin >> n;
    vector<int> apples(n);
    
    for (int i = 0; i < n; i++) {
        cin >> apples[i];
    }
    
    vector<int> groupA, groupB;
    f(0, groupA, groupB, apples);
    
    cout << minDiff << "\n";
    return 0;
}