#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;

        vector<int> v(k);
        for (int j = 0; j < k; j++){
            int m; cin >> m;
            v[j] = m; 
        }

        sort(v.begin(), v.end());

        int ans = 0;
        for (int l = 0; l < k-1; l++){
            if (v[l] == 1)
                ans++;
            else
                ans += 2*v[l]-1;
        }
        cout << ans << endl;
    }
   return 0; 
}