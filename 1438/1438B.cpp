#include<bits/stdc++.h>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		long long int a[n];
	
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		bool chk = true;
		
		sort(a, a + n);
		
		for(int i = 0; i < n; i++) {
			if(a[i] == a[i + 1]) {
				cout << "YES" << endl;
				chk = false;
				break;
			}
		}
		
		if(chk) {
			cout << "NO" << endl;
		}
	}
}
