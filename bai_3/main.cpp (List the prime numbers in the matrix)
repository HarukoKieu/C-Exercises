#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;       
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T; cin >> T;
    while (T--) {
        int N, M; cin >> N >> M;
        vector<vector<int>> a(N, vector<int>(M));
        map<int, bool> mp;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> a[i][j];
                if (mp.find(a[i][j]) == mp.end()) {
                    mp[a[i][j]] = checkPrime(a[i][j]);
                }
            }
        }

        for (auto it : mp) {
            if (it.second) { 
                cout << it.first << " ";
            }    
        }
        cout << endl;
    }
    return 0;
}
