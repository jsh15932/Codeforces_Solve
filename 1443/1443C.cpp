#include<bits/stdc++.h>
using namespace std;

int t, n;

struct T {
	int x, y;
} a[200001];

int cmp(const T &a, const T &b) {
	return (a.x < b.x);
}

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		for(int i = 1; i <= n; i++) {
			cin >> a[i].x;
		}
		
		for(int i = 1; i <= n; i++) {
			cin >> a[i].y;
		}
		
		sort(a + 1, a + n + 1, cmp);
		
		int cur = n;
		int sum = 0;
		
		while(cur >= 1) {
			if(a[cur].x > a[cur].y + sum) {
				sum += a[cur].y;
				cur--;
			}
			
			else {
				break;
			}
		}
		
		cout << max(a[cur].x, sum) << endl;
	}
}
