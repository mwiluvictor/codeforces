#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int num=0;

  for (int i=0; i < n; i++){
    int p, v, t;
    cin >> p >> v >> t;

    if (p+v+t >= 2)
      num += 1;
  } 
  cout << num << endl;

  return 0;
}
