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
    int n, q; cin >> n >> q;

    vector<char> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& y : b) cin >> y;
    
    vector<int> count(26, 0);
    vector<vector<int>> vec;
    vec.push_back(count);

    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        int sum = 0;
        --l;

        for (int i = l; i < n; i++) {
            count[a[i] - 'a']++;
            count[b[i] - 'a']--;
            vec.push_back(count);
        }

        for (int i = 0; i < 26; i++) {
            sum += abs(vec[l][i] - vec[r][i]);
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