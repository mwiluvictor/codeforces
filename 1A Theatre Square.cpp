#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    long double n, m, a;
    cin >> n >> m >> a;

    cout << (((n+a-1)/a)*((m+a-1)/a)) << endl;
    return 0;
}