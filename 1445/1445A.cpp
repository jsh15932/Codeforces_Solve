#include<bits/stdc++.h>
using namespace std;

int t, n, x;

int Solve() {
	cin >> n >> x;
		
	int a[n], b[n];
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++) {
		cin >> b[i];
	}
	
	sort(a, a + n);
	sort(b, b + n);
	reverse(b, b + n);
	
	for(int i = 0; i < n; i++) {
		if(a[i] + b[i] <= x) {
			continue;
		}
		
		else {
			cout << "No" << endl;
			return 0;
		}
	}
		
	cout << "Yes" << endl;
	return 0;
}

int main() {
	cin >> t;
	
	while(t--) {
		Solve();
	}
}
