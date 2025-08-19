#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(){
	string str;
	cin >> str;
	for (int i = 0; i < str.length() ;)
	{
		if (str[i] == str[i-1] && str[i] == str[i+1])
		{	
			str.erase(i-1,3);
			i--;
		}
		else{
			i++;
		}
	}
	cout << str << endl;
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t; cin >> t; while(t--)
	solve();
	return 0;
}