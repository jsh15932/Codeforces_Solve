#include<iostream>
#include<algorithm>
using namespace std;

int t;
long long int n;

long long int f(long long int n) {
	if(n == 0) {
		return 0;
	}
	
	return n + f(n / 2);
}

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		cout << f(n) << endl;
	}
}
