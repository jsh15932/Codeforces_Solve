#include<bits/stdc++.h>
using namespace std;

int t, n, q;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> q;
		
		string s;
		
		cin >> s;
		
		while(q--) {
			int l, r, ll, rr;
			
			cin >> l >> r;
			
			ll = s.find(s[l - 1]) + 1;
			
			reverse(s.begin(), s.end());
			
			rr = s.find(s[n - r]);
			rr = n - rr;
			
			reverse(s.begin(), s.end());
			
			if(ll < l || rr > r) {
				cout << "YES" << endl;
			}
			
			else {
				cout << "NO" << endl;
			}
		}
	}
}
