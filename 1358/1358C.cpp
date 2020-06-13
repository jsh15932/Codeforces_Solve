#include<iostream>
#include<algorithm>
using namespace std;

const int maxN = 1e5 + 10;
int d[maxN];
int t;
long long int x1, x2, y1, y2;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> x1 >> y1 >> x2 >> y2;
		
		long long int ans = (y2 - y1) * (x2 - x1);
		
		cout << ans + 1 << endl;
	}
}
