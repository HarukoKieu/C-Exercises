#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s; getline(cin, s);        
        cout << s.size() * (s.size() + 1) / 2;
    }
    return 0;
} 
