#include<bits/stdc++.h>
using namespace std;

int t;
long long int p, q;

long long int Solve(long long int x) {
	if(x == 1) {
		return 1;
	}
	
	long long int y = p;
	
	while(y % q == 0) {
		y /= x;
	}
	
	return y;
}

int main() {
	cin >> t;
	
	while(t--) {
		cin >> p >> q;
		
		if(p % q == 0) {
			long long int ans = 1;
			
			for(int i = 1; i * i <= q; i++) {
				if(q % i == 0) {
					ans = max(ans, Solve(i));
					ans = max(ans, Solve(q / i));
				}
			}
			
			cout << ans << endl;
		}
		
		else {
			cout << p << endl;
		}
	}
}
