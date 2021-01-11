#include<bits/stdc++.h>
using namespace std;

int t, n, c0, c1, h;
string s;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> c0 >> c1 >> h;
		cin >> s;
		
		int ans = 0;
		
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') {
				ans += min(c0, c1 + h);
			}
			
			else {
				ans += min(c1, c0 + h);
			}
		}
		
		cout << ans << endl;
	}
}
