#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    //take in the values of m and n
    int m, n;
    cin >> m >> n;

    //calculate max number of dominos that can be placed on the board
    int rect = m * n;
    int dom = rect / 2;

    cout << dom;
    return 0; 

}