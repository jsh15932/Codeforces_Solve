#include<bits/stdc++.h>
using namespace std;

int t, x, y;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> x >> y;
		
		int ans = max(x, y) * 2 - 1;
		
		if(x == y) {
			ans++;
		}
		
		cout << ans << endl;
	}
}
