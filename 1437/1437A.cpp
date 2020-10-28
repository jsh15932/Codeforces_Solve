#include<bits/stdc++.h>
using namespace std;
 
int t, l, r;
 
int main() {
	cin >> t;
	
	while(t--) {
		cin >> l >> r;
		
		if(l - 1 >= r / 2) {
			cout << "YES" << endl;
		}
		
		else {
			cout << "NO" << endl;
		}
	}
}
