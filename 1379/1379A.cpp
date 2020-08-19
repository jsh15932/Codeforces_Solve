#include<bits/stdc++.h>
using namespace std;

string a = "abacaba";

int res(string s) {
	int cnt = 0;
	
	for(int i = 0; i < s.size(); i++) {
		if(s.substr(i, 7) == a) {
			cnt++;
		}
	}
	
	return cnt;
}

void solve() {
	int n;
	string s;
	
	cin >> n;
	cin >> s;
	
	for(int i = 0; i < n; i++) {
		string str = s;
		
		for(int j = 0; j < n; j++) {
			if(str[j] != '?') {
				continue;
			}
			
			if(i <= j && j < i + 7) {
				str[j] = a[j - i];
			}
			
			else {
				str[j] = 'd';
			}
		}
		
		if(res(str) == 1) {
			cout << "Yes" << endl;
			cout << str << endl;
			return;
		}
	}
	
	cout << "No" << endl;
}

int main() {
	int t;
	
	cin >> t;
	
	while(t--) {
		solve();
	}
}
