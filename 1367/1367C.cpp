#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int t, n, k;
string s, p;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> k >> s;
		p = s;
		
		for(int i = 0; i < n; i++) {
			if(p[i] == '1') {
				for(int j = i - k; j <= i + k; j++) {
					if(j >= 0 && j < n) {
						s[j] = '1';
					}
				}
			}
		}
		
		int res = 0;
		
		for(int i = 0; i < n; i++) {
			if(s[i] == '0') {
				res++;
				
				for(int j = i + 1; j <= i + k; j++) {
					if(j < n) {
						s[j] = '1';
					}
				}
			}
		}
		
		cout << res << endl;
	}
}
