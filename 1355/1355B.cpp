#include<iostream>
#include<algorithm>
using namespace std;

int t, n;
int d[200001];
int ans, cur;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		
		cur = 0;
		ans = 0;
		
		for(int i = 0; i < n; i++) {
			cin >> d[i];
		}
		
		sort(d, d + n);
		
		while(1) {
			while(cur + d[cur] < n) {
				if(d[cur] < d[cur + d[cur] - 1]) {
					d[cur] += d[cur + d[cur] - 1];
				}
				
				else {
					break;
				}
			}
			
			if(cur + d[cur] >= n) {
				if(cur + d[cur] == n) {
					if(d[cur] >= d[cur + d[cur] - 1]) {
						ans += 1;
					}
				}
				
				break;
			}
				
			else {
				ans += 1;
				cur += d[cur];
			}
		}
		
		cout << ans << endl;
	}
}
