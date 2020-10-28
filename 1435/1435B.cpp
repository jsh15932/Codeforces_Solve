#include<bits/stdc++.h>
using namespace std;

int t, n, m;
int a[501][501], b[501][501], d[501 * 501];
bool dp[501 * 501];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> t;
	
	while(t--) {
		cin >> n >> m;
		
		for(int i = 0; i <= n * m; i++) {
			dp[i] = d[i] = 0;
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
			
			dp[a[i][0]] = 1;
			d[a[i][0]] = i;
		}
		
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				cin >> b[i][j];
			}
		}
		
		for(int i = 0; i < m; i++) {
			if(dp[b[i][0]]) {
				for(int j = 0; j < n; j++) {
					for(int k = 0; k < m; k++) {
						cout << a[d[b[i][j]]][k] << ' ';
					}
					
					cout << endl;
				}
				
				break;
			}
		}
	}
}
