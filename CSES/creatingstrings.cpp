#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> result;
    sort(s.begin(), s.end());
    do
    {
        result.push_back(s);
    } while (next_permutation(s.begin(),s.end()));
    
    cout << result.size() << "\n";
    for(auto str : result){
        cout << str << "\n";
    }

    return 0;
}