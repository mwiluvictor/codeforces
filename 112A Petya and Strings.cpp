#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    //transform all the strings to uppercase 
    transform (str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform (str2.begin(), str2.end(), str2.begin(), ::toupper);
    
    //you could also transform the strings to lowercase using
    //::tolower and the result will be correct

    //compare the two strings
    if (str1 > str2)
        cout << "1";
    else if (str1 < str2)
        cout << "-1";
    else
        cout << "0";

    return 0;
}