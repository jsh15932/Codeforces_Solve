#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		if(n % 2 == 0) {
			cout << n / 2 << " " << n / 2 << endl;
		}
		
		else {
			bool chk = false;
			
			for(int i = 2; i * i <= n; i++) {
				if(n % i == 0) {
					cout << n / i << " " << n - (n / i) << endl;
					chk = true;
					break;
				}
			}
			
			if(!chk) {
				cout << 1 << " " << n - 1 << endl;
			}
		}
	}
}
