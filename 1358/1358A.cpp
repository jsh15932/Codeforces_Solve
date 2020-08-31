#include<bits/stdc++.h>
using namespace std;

int t;
int n, m, ans;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> m;
		
		if(n % 2 == 0) {
			ans = (n / 2) * m;
		}
		
		else {
			if(m % 2 == 0) {
				ans = (n / 2) * m + (m / 2);
			}
			
			else {
				ans = (n / 2) * m + ((m + 1) / 2);
			}
		}
		
		cout << ans << endl;
	}
}
