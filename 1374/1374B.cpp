#include<bits/stdc++.h>
using namespace std;

long long int n;

void solve() {
	long long int ans = 0;
	
	cin >> n;
	
	while(n != 1) {
		ans++;
		
		if(n % 3 != 0) {
			cout << - 1 << endl;
			return;
		}
		
		if(n % 6 == 0) {
			n /= 6;
		}
		
		else {
			n *= 2;
		}
	}
	
	cout << ans << endl;
}

int main() {
	int t;
	
	cin >> t;
	
	while(t--) {
		solve();
	}
}
