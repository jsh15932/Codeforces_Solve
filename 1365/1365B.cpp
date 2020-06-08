#include<iostream>
#include<algorithm>
using namespace std;

int t, n, num;
int d[501];

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		bool chk[2] = {false, false};
		
		for(int i = 1; i <= n; i++) {
			cin >> d[i];
		}
		
		for(int i = 1; i <= n; i++) {
			cin >> num;
			
			chk[num] = true;
		}
		
		if(chk[0] && chk[1]) {
			cout << "Yes\n";
		}
		
		else {
			bool c = false;
			
			for(int i = 1; i + 1 <= n; i++) {
				if(d[i] > d[i + 1]) {
					c = true;
				}
			}
			
			if(c) {
				cout << "No\n";
			}
			
			else {
				cout << "Yes\n";
			}
		}
	}
}
