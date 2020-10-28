#include<bits/stdc++.h>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		int d[n];
		
		for(int i = 0; i < n; i++) {
			cin >> d[i];
		}
		
		for(int i = 0; i < n; i += 2) {
			cout << d[i + 1] << ' ' << -d[i] << ' ';
		}
		
		cout << endl;
	}
}
