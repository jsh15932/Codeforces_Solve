#include<bits/stdc++.h>
using namespace std;
#define INF 987654321

int t, n;
int d[401];
int dp[401][401];

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		for(int i = 0; i < n; i++) {
			cin >> d[i];
		}
		
		sort(d, d + n);
		
		for(int i = 0; i <= n; i++) {
			for(int j = 0; j <= 2 * n; j++) {
				dp[i][j] = INF;
			}
		}
		
		dp[0][0] = 0;
		
		for(int i = 0; i <= n; i++) {
			for(int j = 0; j < 2 * n; j++) {
				dp[i][j + 1] = min(dp[i][j], dp[i][j + 1]);
				
				if(i < n) {
					dp[i + 1][j + 1] = min(dp[i][j] + abs(d[i] - (j + 1)), dp[i + 1][j + 1]);
				}
			}
		}
		
		cout << dp[n][2 * n] << endl;
	}
}
