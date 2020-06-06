#include<iostream>
#include<algorithm>
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
		
		sort(d, d + n);
		
		int ans = -1;
		
		for(int i = 1023; i >= 1; i--) {
			int dp[n];
			
			for(int j = 0; j < n; j++) {
				dp[j] = d[j] ^ i;
			}
			
			sort(dp, dp + n);
			
			bool chk = true;
			
			for(int j = 0; j < n; j++) {
				if(d[j] != dp[j]) {
					chk = false;
				}
			}
				
			if(chk) {
				ans = i;
			}
		}
		
		cout << ans << endl;
	}
}
