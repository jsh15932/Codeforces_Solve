#include<iostream>
#include<algorithm>
using namespace std;

int t, n, k;
int a[31];
int b[31];
bool chk;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> k;
		
		int cnt = 0;
		int sum = 0;
		chk = true;
		
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		for(int i = 0; i < n; i++) {
			cin >> b[i];
		}
		
		sort(a, a + n);
		sort(b, b + n);
		reverse(b, b + n);
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(k == 0) {
					chk = false;
				}
				
				if(chk) {
					if(a[i] < b[j]) {
						swap(a[i], b[j]);
						cnt++;
					}
					
					if(cnt == k) {
						chk = false;
					}
				}
			}
		}
		
		chk = false;
		
		if(!chk) {
			for(int i = 0; i < n; i++) {
				sum += a[i];
			}
		}
		
		cout << sum << endl;
	}
}
