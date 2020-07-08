#include<iostream>
#include<algorithm>
using namespace std;

int t;
long long int n, r;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> r;
		
		long long int ans = 0;
		
		if(r > n) {
			r = n;
		}
		
		if(r == n) {
			ans++;
			r--;
		}
		
		ans += r * (r + 1) / 2;
		
		cout << ans << endl;
	}
}
