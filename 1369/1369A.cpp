#include<iostream>
#include<algorithm>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		if(n % 4 == 0) {
			cout << "YES" << endl;
		}
		
		else {
			cout << "NO" << endl;
		}
	}
}
