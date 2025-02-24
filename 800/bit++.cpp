#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;  
    int flag = 0;
    string s;

    for (int i = 0; i < t; i++) {
        cin >> s;
        if (s == "++X" || s == "X++") {
            flag++;
        } else if (s == "--X" || s == "X--") {
            flag--;
        }
    }

    cout << flag << endl;  

    return 0;
}
