#include<bits/stdc++.h>
using namespace std;

int t, n;

int main() {
	cin >> t;
	
	while(t--) {
		int Max_N = 0;
		
		cin >> n;
		
		int d[n + 1] = {0, };
		int a[n + 1];
		
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		
		sort(a + 1, a + n + 1);
		
		for(int i = 1; i <= n; i++) {
			if(i < a[i]) {
				d[i] = 0;
			}
			
			else {
				d[i] = d[i - a[i]] + 1;
			}
		}
		
		for(int i = 1; i <= n; i++) {
			Max_N = max(d[i], Max_N);
		}
		
		cout << Max_N << endl;
	}
}
