#include<iostream>
#include<algorithm>
using namespace std;

int t, n, m;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> m;
		
		if(n == 1) {
			cout << 0 << endl;
		}
		
		else if(n == 2) {
			cout << m << endl;
		}
		
		else {
			cout << m * 2 << endl;
		}
	}
}
