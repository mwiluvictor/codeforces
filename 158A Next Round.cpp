#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    //take the input values of n and k
    int n, k;
    int num = 0;
    cin >> n >> k;

    //create an array to store the scores of the participants
    int scores[n];
    for (int i=0; i<n; i++){
        cin >> scores[i];
    }

    //store the k-th value in kValue and compare the scores to it
    int kValue = scores[k-1];
    for (int i=0; i<n; i++){
        if (scores[i]>=kValue && scores[i]!=0)
            num++;
    }

    //print out the total number of participants proceeding to the next round
    cout << num;
    return 0;
}