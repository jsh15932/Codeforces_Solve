#include<iostream>
#include<algorithm>
using namespace std;

int t, n, ans;
int d[200001];

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		ans = 1;
		
		for(int i = 1; i <= n; i++) {
			cin >> d[i];
		}
		
		sort(d + 1, d + n + 1);
		
		for(int i = n; i >= 1; i--) {
			if(i + 1 > d[i]) {
				ans = i + 1;
				break;
			}
		}
		
		cout << ans << endl;
	}
}
