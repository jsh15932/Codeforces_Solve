#include<bits/stdc++.h>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		int d[n];
		
		for(int i = 0; i < n; i++) {
			cout << (n * 4)	- (i * 2) << " ";
		}
		
		cout << endl;
	}
}
