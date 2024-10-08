#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << __VA_ARGS__ << "):", dbg_out(__VA_ARGS_)

#define ll long long 
#define lli long long int  
#define all(x) (x).begin(),(x).end()
#define srt(x) sort(x.begin(),x.end())
#define mxe(x) *max_element(x.begin(),x.end())
#define mne(x) *min_element(x.begin(),x.end())
#define unq(x) v.resize(distance(x.begin(), unique(x.begin(),x.end())))
//sort before applying unique
#define rall(x) (x).rbegin(),(x).rend()
#define sz(x) ((int)x.size())

const int MXN = 1e5 + 5, INF = 1e9 + 5;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
    int n, q; cin >> n >> q;
    string a, b; cin >> a >> b;

    vector<vector<int>> prefA(n+1, vector<int>(26));
    vector<vector<int>> prefB(n+1, vector<int>(26));

    for (int i = 0; i < n; i++) {
        prefA[i+1] = prefA[i];
        int char_id = a[i] - 'a';
        prefA[i+1][char_id]++;
    }
    for (int i = 0; i < n; i++) {
        prefB[i+1] = prefB[i];
        int char_id = b[i] - 'a';
        prefB[i+1][char_id]++;
    }

    while (q--) {
        int l, r; cin >> l >> r;
        int sum = 0;
        --l;

        for (int i = 0; i < 26; i++) {
            int a = abs(prefA[l][i] - prefA[r][i]);
            int b = abs(prefB[l][i] - prefB[r][i]);
            sum += abs(a - b);
        }
        cout << sum/2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}