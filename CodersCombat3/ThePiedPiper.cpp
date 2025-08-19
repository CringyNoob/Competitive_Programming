#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n[t], b[t];
    for (int i = 0; i < t; i++) {
        cin >> n[i] >> b[i];
    }
    for (int i = 0; i < t; i++)
    {
        float plays = ((-1+sqrt(1+4*2*n[i]))/2);
        int total_cost = ceil(plays) * b[i];
        cout << total_cost << endl;
    }
    
}