#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    
    for(int i = 0; i < str1.size(); i++) {
        if(str1[i] != '+')
            str2.push_back(str1[i]);
    }

    sort(str2.begin(), str2.end());
    
    cout << str2[0];
    for(int i = 1; i < str2.size(); i++)
        cout << "+" << str2[i];

    return 0;
}