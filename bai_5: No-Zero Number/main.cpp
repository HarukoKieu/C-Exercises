/*
Ý tưởng thuật toán: 

- Gán: a = 1 và b = n - 1.

- Nếu a hoặc b có chữ số 0 → tăng a và giảm b cho đến khi a, b ≠ 0.

- In ra kết quả. */

#include <bits/stdc++.h>
using namespace std;

bool hasZero(int x) {
    while (x > 0) {
        if (x % 10 == 0) {
            return true;
        }    
        x /= 10;
    }
    return false;
}

int main() {
    int n; cin >> n;    

    int a = 1, b = n - 1;
    while (hasZero(a) || hasZero(b)) {
        a++;
        b--;
    }

    cout << a << " " << b;
    return 0;
}
