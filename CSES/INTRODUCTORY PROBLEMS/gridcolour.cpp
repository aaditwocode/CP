#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<char>> grid(n, vector<char>(m));

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> grid[i][j];
    }
  }

 
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if((i + j) % 2 == 0){

        grid[i][j] = (grid[i][j] == 'A') ? 'C' : 'A';
      } else {
     
        grid[i][j] = (grid[i][j] == 'B') ? 'D' : 'B';
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << grid[i][j];
    }
    cout << "\n";
  }
  
  return 0;
}