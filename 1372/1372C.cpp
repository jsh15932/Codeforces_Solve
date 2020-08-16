#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		int d[n];
		
		for(int i = 1; i <= n; i++) {
			cin >> d[i];
		}
		
		int x = n + 1;
		int y = 0;
		
		for(int i = 1; i <= n; i++) {
			if(d[i] != i) {
				x = min(x, i);
				y = max(y, i);
			}
		}
		
		if(!y) {
			cout << 0 << endl;
			continue;
		}
		
		bool chk = false;
		
		for(int i = x; i <= y; i++) {
			if(d[i] == i) {
				chk = true;
			}
		}
		
		if(chk) {
			cout << 2 << endl;
		}
		
		else {
			cout << 1 << endl;
		}
	}
}
