#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int t;
int n, m;
int a, b;
char c;
int d[51];
int dp[51];

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> m;
		
		memset(d, 0, sizeof(d));
		memset(dp, 0, sizeof(dp));
		
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				cin >> c;
				
				if(c == '1') {
					d[i]++;
					dp[j]++;
				}
			}
		}
			
		a = 0;
		b = 0;
		
		for(int i = 1; i <= n; i++) {
			if(d[i] == 0) {
				a++;
			}
		}
		
		for(int i = 1; i <= m; i++) {
			if(dp[i] == 0) {
				b++;
			}
		}
		
		cout << (min(a, b) % 2 == 0 ? "Vivek" : "Ashish") << endl;
	}
}
