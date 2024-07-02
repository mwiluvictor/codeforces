#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    int count = 0;

    for(int i = 1; i < s.length()+1; i++) {
        if(s[i] != s[i-1])
            count++;
    }
    
    if(count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}