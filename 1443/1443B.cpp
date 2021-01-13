#include<bits/stdc++.h>
using namespace std;

int t, a, b;
string s;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> a >> b;
		cin >> s;
		
		int p = 0;
		int cnt_a = 0;
		int cnt_b = 0;
		
		while(s.length() > p && s[p] == '0') {
			p++;
		}
		
		if(s.length() > p) {
			cnt_a = 1;
		}
		
		int q = p;
		
		while(s.length() > p) {
			while(s.length() > q && s[q] == '1') {
				q++;
			}
			
			if(q == s.length()) {
				break;
			}
			
			p = q - 1;
			
			while(s.length() > q && s[q] == '0') {
				q++;
			}
			
			if(q == s.length()) {
				break;
			}
			
			if((q - p - 1) * b < a) {
				cnt_b += q - p - 1;
			}
			
			else {
				p = q;
				cnt_a += 1;
			}
		}
		
		cout << (cnt_a * a) + (cnt_b * b) << endl;
	}
}
