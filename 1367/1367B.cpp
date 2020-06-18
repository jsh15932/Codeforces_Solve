#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		vector <int> vc(n);
		int cnt[2] = {0, 0};
		
		for(int i = 0; i < vc.size(); i++) {
			cin >> vc[i];
			
			vc[i] %= 2;
			cnt[vc[i]]++;
		}
		
		if(cnt[0] != (n + 1) / 2 || cnt[1] != n / 2) {
			cout << -1 << '\n';
		}
		
		else {
			int count = 0;
		
			for(int i = 0; i < n; i++) {
				if(vc[i] != i % 2) {
					count++;
				}
			}
			
			cout << count / 2 << '\n';
		}
	}
}
