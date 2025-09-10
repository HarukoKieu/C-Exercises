/*
* Ý chính của thuật toán

– Xây dựng hàm kiểm tra số nguyên tố:

Nếu n ≤ 1 → không phải số nguyên tố.

Nếu n ≤ 3 → là số nguyên tố.

Nếu chia hết cho 2 hoặc 3 → không phải số nguyên tố.

Dùng vòng lặp kiểm tra các số từ 5 đến sqrt(n) với bước nhảy 6 (chỉ kiểm tra i và i + 2, vì mọi số nguyên tố lớn hơn 3 đều có dạng 6k ± 1):.

Nếu chia hết → không phải số nguyên tố.

Ngược lại → là số nguyên tố.

– Dùng unordered_set để lưu các số nguyên tố (tránh trùng lặp).

– Duyệt ma trận, nếu a[i][j] là số nguyên tố thì thêm vào unordered_set.

– Duyệt unordered_set rồi in ra kết quả.    
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i <= sqrt(n); i += 6) {
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
        unordered_set<int> primes;

        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cin >> a[i][j];
                if (checkPrime(a[i][j])) {
                    primes.insert(a[i][j]);
                }
            }
        }

        for (auto x : primes) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
