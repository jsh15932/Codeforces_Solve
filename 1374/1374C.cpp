#include<bits/stdc++.h>
using namespace std;

int t, n;

void solve() {
	string s;
	
	cin >> n;
	cin >> s;
	
	int ans = 0;
	
	while(1) {
		int index = -1;
		int sum = 0;
		
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '(') {
				sum++;
			}
			
			else {
				sum--;
			}
			
			if(sum < 0) {
				index = i;
				break;
			}
		}
		
		if(index == -1) {
			break;
		}
		
		ans++;
		
		s.erase(s.begin() + index);
		s.push_back(')');
	}
	
	cout << ans << endl;	
}

int main() {
	cin >> t;
	
	while(t--) {
		solve();
	}
}
