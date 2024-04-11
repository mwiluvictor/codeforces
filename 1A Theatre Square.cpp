#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m >> a;

    int x, y, s;
    x = n/a;
    y = m/a;

    if(n%a >= 1){
        x+=1;
    }
    if (m%a >= 1){
        y+=1;
    }

    s = x*y;

    cout << s << endl;
}