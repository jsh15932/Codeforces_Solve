#include<iostream>
#include<algorithm>
using namespace std;

int n, t;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		if(n % 2 == 1) {
			n--;
		}
		
		cout << n / 2 << endl;
	}
}
