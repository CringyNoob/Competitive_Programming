#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    int children[N] = {0};
    int l[K], r[K], d[K];
    for (size_t i = 0; i < K; i++)
    {
        cin >> l[i] >> r[i] >> d[i];
    }
    for (int i = 0; i < K; i++)
    {
        for (int j = l[i]-1; j <= r[i]-1; j++)
        {
            children[j] += d[i];
        }
        
    }
    for (int salami : children)
    {
        cout << salami << " ";
    }
    
    
}