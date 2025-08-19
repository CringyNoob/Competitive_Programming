#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int factorial(int x){
	int fac = 1;
	for (int i = 1; i <= x; ++i)
	{
		fac *= i;
	}
	return fac;
}


void solve(){
	int n; cin >> n; cin.ignore();
	int f = 1;

	for (int i = 1; i <= n; ++i)
	{
		f*= factorial(i);
	}
	int count = 0;
	while(f%10==0){
		count++;
		f/=10;
	}
	cout << count << endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t; cin >> t; while(t--)
	solve();
	return 0;
}