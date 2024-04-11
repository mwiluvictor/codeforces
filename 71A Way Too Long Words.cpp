#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i=0; i < n; i++){
        string s;
        cin >> s;

        int w;
        w = s.size();

        if (w > 10){
            cout << s[0] << w-2 << s[w-1] << endl;
        }
        else 
            cout << s << endl;
    }
    return 0;
}