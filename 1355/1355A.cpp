#include<bits/stdc++.h>
using namespace std;

int t;
long long int a, b;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> a >> b;
		
		long long int k = a;
		long long int x;
		long long int y;
		
		bool chk = true;
		
		for(int i = 1; i < b; i++) {
			x = 10;
			y = 0;
			k = a;
			
			while(k) {
				x = min(k % 10, x);
				y = max(k % 10, y);
				
				k /= 10;
				
				if(x == 0 || y == 0) {
					chk = false;
					break;
				}
			}
			
			if(!chk) {
				break;
			}
			
			else {
				a += x * y;
			}
		}
		
		cout << a << endl;
	}
}
