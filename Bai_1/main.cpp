#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int Max = -1e6, Min = 1e6;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num < Min) Min = num;                
        if (num > Max) Max = num;  
    }
    cout << Min << " " << Max;                                   
    return 0;
}