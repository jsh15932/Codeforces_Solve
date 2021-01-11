#include<bits/stdc++.h>
using namespace std;

int t, n, k;
int d[200001];

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> k;
		
		for(int i = 1; i <= n * k; i++) {
			cin >> d[i];
		} 
		
		long long int ans = 0;
		
		int x = 1;
		int y = n * k;
		
		if(n % 2 == 0) {
			while(x <= y){
				x += ((n / 2) - 1);
				y -= (n / 2);
				
				ans += d[y];
				y--;
			}
		}
		
		else {
			while(x <= y) {
				x += (n / 2);
				y -= (n / 2);
				
				ans += d[y];
				y--;
			}
		}
		
		cout << ans << endl;
	}
}
