#include<bits/stdc++.h>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		cout << n << endl;
		
		for(int i = 0; i < n; i++) {
			cout << i + 1 << " ";
		}
		
		cout << endl;
	}
}
