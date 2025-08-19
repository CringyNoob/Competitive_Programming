#include<bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;

void solve(){
	ll n; cin >> n;
	ll cake[n], totalSum = 0;
	for (ll i = 0; i < n; ++i)
	{	
		cin >> cake[i];
		totalSum += cake[i];
	}

	//Kadane's Algorithm

	//maxSubArrSum

	ll maxEndingHere = cake[0];
	ll maxSoFar = cake[0];
	for (ll i = 1; i < n; ++i)
	{
		maxEndingHere = max(cake[i], maxEndingHere + cake[i]);
		maxSoFar = max(maxSoFar,maxEndingHere);
	}

	//minSubArrSum

	ll minEndingHere = cake[0];
	ll minSoFar = cake[0];
	for (ll i = 1; i < n; ++i)
	{
		minEndingHere = min(cake[i], minEndingHere + cake[i]);
		minSoFar = min(minEndingHere,minSoFar);
	}
	

	if (maxSoFar < 0) // if all the values are negative
	{
		cout << maxSoFar << endl;
	}
	else{
		cout << max(maxSoFar, totalSum - minSoFar) << endl;
	}

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}