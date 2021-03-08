#include<bits/stdc++.h>
using namespace std;

int a[27], b[27];
int t, n, k;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> k;
		
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		
		for(int i = 0; i < n; i++) {
			char c;
			
			cin >> c;
			
			a[c - 'a']++;
		}
		
		for(int i = 0; i < n; i++) {
			char c;
			
			cin >> c;
			
			b[c - 'a']++;
		}
		
		bool chk = true;
		
		for(int i = 0; i < 26; i++) {
			if(a[i] - b[i] < 0) {
				chk = false;
			}
			
			if((a[i] - b[i]) % k) {
				chk = false;
			}
			
			else {
				a[i + 1] += a[i] - b[i];
			}
		}
		
		if(chk) {
			cout << "Yes" << endl;
		}
		
		else {
			cout << "No" << endl;
		}
	}
}
