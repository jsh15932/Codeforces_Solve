#include<iostream>
#include<algorithm>
using namespace std;

int t;
long long int a, b;
bool chk;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> a >> b;
		
		long long int x;
		long long int y;
		long long int k;
		
		chk = true;
		
		for(int i = 1; i < b; i++) {
			x = 10;
			y = 0;
			k = a;
			
			while(k) {
				x = min(x, k % 10);
				y = max(y, k % 10);
				
				k /= 10;
				
				if(x == 0 || y == 0) {
					chk = false;
					break;
				}
			}
			
			a += x * y;
		}
		
		cout << a << endl;
	}
}
