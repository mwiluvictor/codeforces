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
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int wins = 0;

    if ((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2))
        wins += 2;

    if ((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1))
        wins += 2;
    
    cout << wins <<'\n';
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