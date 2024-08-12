#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS_)

#define ll long long 
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
    int n, s, m; cin >> n >> s >> m;

    vector<int> C;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        C.push_back(a);
        C.push_back(b);
    }

    srt(C);
    int size = sz(C)-1;

    
    for (int i = 1; i < (double)ceil((double)size/2); i += 2) {
        if ((abs(C[i+1])-abs(C[i]) >= s)) {
            cout << "YES" << '\n';
            break;
        } else if ((C[0] >= s) || (m - C[size] >= s)) {
            cout << "YES" << '\n';
            break;
        } else cout << "NO" << '\n';
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