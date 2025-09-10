/*
Input:
4
5
1 5
3 4
5 6
8 10
0 1
3
0 2
0 1
0 3
3
3 8
10 18
6 11
4
10 20
0 5
15 17
2 2

output: 
7
0
5
13
*/

/* Ý tưởng thuật toán:

Duyệt lần lượt qua từng đoạn [li, ri].

Dịch chuyển khoảng ± k, rồi lấy giao với [li, ri] để cập nhật khoảng hợp lệ.

Nếu giao rỗng → k không hợp lệ.

Vì k càng lớn thì càng dễ thỏa mãn, dùng binary search để tìm k nhỏ nhất hợp lệ. */  

// Code:

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll li[200005], ri[200005];
int n;
bool check(ll k) {
    ll L = 0, R = 0;
    for (int i = 0; i < n; i++) {
        L = max(li[i], L - k);
        R = min(ri[i], R + k);
        if (L > R) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);  
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> li[i] >> ri[i];
        }

        ll left = 0, right = 1e18, ans = 0;
        while (left <= right) {
            ll mid = (left + right) / 2;
            if (check(mid)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
