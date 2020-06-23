#include<iostream>
#include<algorithm>
using namespace std;

int t, n, num;
int d[501];

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		bool chk[2] = {false, };
		
		for(int i = 0; i < n; i++) {
			cin >> d[i];
		}
		
		for(int i = 0; i < n; i++) {
			cin >> num;
			
			chk[num] = true;
		}
		
		if(chk[0] && chk[1]) {
			cout << "Yes" << endl;
		}
		
		else {
			bool ans = true;
			
			for(int i = 0; i + 1 < n; i++) {
				if(d[i] > d[i + 1]) {
					ans = false;
				}
			}
			
			if(!ans) {
				cout << "No" << endl;
			}
			
			else {
				cout << "Yes" << endl;
			}
		}
	}
}
