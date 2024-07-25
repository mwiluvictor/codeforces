#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++){
        int n, m, k;
        cin >> n >> m >> k;

        for (int i = n; i >= m + 1; --i)
            cout << i << " ";
        for (int i = 1; i <= m; ++i)
            cout << i << " ";
        
        cout << endl;
    }
    return 0;
}