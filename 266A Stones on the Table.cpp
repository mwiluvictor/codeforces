#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(s[i-1] == s[i]) {
            sum++;
        }
    }

    cout << sum;

    return 0;
}