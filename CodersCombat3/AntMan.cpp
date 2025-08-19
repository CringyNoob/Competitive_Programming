#include<bits/stdc++.h>
using namespace std;

int sumOf(vector<int> items){
	int sum = 0;
	for (int i = 0; i < items.size(); ++i)
	{
		sum+=items[i];
	}
	return sum;
}
void beam(int &x){
	x /= 2;
}

void solve(){
		int n,q; cin >> n >> q;
		vector<int> items(n);
		vector<int> queries(q);
		for (int i = 0; i < n; ++i)
		{
			cin >> items[i];
		}
		for (int i = 0; i < q; ++i)
		{
			cin >> queries[i];
		}

		for (int i = 0; i < q; ++i)
		{	
			int beam = 0;
			if (queries[i] < n){
			cout << "Impossible" << endl;
			}
			else if(sumOf(items) <= queries[i]){
			cout << beam << endl;
			}
			else{
				vector<int> beamedItems = items;
				sort(beamedItems.begin(),beamedItems.end(),greater<int>());
				do{
					beamedItems[0] /= 2;
					beam++;
					if (sumOf(beamedItems) <=queries[i])
					{
						cout << beam << endl;
						break;
					}
					else{
						sort(beamedItems.begin(),beamedItems.end(),greater<int>());
					}
				}while(1);
			}

		}
		

}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	solve();
	return 0;
}