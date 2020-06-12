#include<iostream>
#include<algorithm>
using namespace std;

int t;
int n, m;
int ans;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> m;
		
		ans = 0;
		
		if((n * m) & 1) {
			ans = (n * m) / 2 + 1;
		}
		
		else {
			ans = (n * m) / 2;
		}
		
		cout << ans << endl;
	}
}
