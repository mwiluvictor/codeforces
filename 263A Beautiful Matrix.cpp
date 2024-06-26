#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    //iterate through the matrix 
    for (int i=1; i<=5; i++){
        for (int j=1; j<=5; j++){
            int k;
            cin >> k;
            //the min no. of moves is thus given by
            if (k==1)
                cout << abs(i-3) + abs(j-3) << endl;
        }
        
    }
    return 0;
}