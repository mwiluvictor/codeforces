#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    unsigned long long n, m, a, t;
    cin >> n >> m >> a;

    t = ceil((double)n/a)*ceil((double)m/a);
    cout << t;
     
    return 0;

}