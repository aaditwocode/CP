#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (int)(x).size()
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define MOD 1000000007
#define INF 1e18
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(vector<ll> a,int k) {
       unordered_map<ll,ll> mp;
       for(int i=0;i<a.size();i++){
           mp[a[i]]++;
       }

       if(mp.find(k) == mp.end()){
           cout<<'NO'<<endl;
       }
       else{
           cout<<'YES'<<endl;
       }
}

int main() {
    FAST_IO
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >>  n >> k;
        vector<ll> a;
        for(int i=0;i<n;i++){
          cin >> a[i];
        }

        solve(a, k);  
       
    }
    return 0;
}
