#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(){
	int n; cin >> n;
	cin.ignore();
	vector<vector<int>> empPref(n);
	vector<int> teams(n);
	string line;
	int happyEmp = 0;

    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        empPref[i] = {a, b, c};
    }
	iota(teams.begin(), teams.end(), 1);

	for(const auto& emp : empPref){
		for(int pref : emp){
			auto empTeam = find(teams.begin(), teams.end(), pref);
			if (empTeam!= teams.end())
			{
				happyEmp++;
				teams.erase(empTeam);
				break;
			}

		}
	}
	cout << happyEmp << endl;

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t; cin >> t; while(t--)
	solve();
	return 0;
}