#include<bits/stdc++.h>
using namespace std;

string board[8];
bool col[8] = {false}, diag1[15] = {false}, diag2[15] = {false};
int ans = 0;

void backtrack(int row) {
    if (row == 8) {
        ans++;
        return;
    }
    
    for (int c = 0; c < 8; c++) {
        if (board[row][c] == '*' || col[c] || 
            diag1[row + c] || diag2[row - c + 7]) {
            continue;
        }
        
        col[c] = diag1[row + c] = diag2[row - c + 7] = true;
        backtrack(row + 1);
        col[c] = diag1[row + c] = diag2[row - c + 7] = false;
    }
}

int main() {
    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }
    
    backtrack(0);
    cout << ans << "\n";
    
    return 0;
}

  