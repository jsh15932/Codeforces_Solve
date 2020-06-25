#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int t, n, k;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> k;
		
		vector <int> a(n);
		vector <int> w(k);
		
		int cnt = 0;
		
		for(int i = 0; i < a.size(); i++) {
			cin >> a[i];
		}
		
		for(int i = 0; i < w.size(); i++) {
			cin >> w[i];
			
			if(w[i] == 1) {
				cnt++;
			}
		}
		
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		sort(w.begin(), w.end());
		
		long long int ans = 0;
		
		for(int i = 0; i < k; i++) {
			ans += a[i];
			
			if(cnt > 0) {
				ans += a[i];
				cnt--;
			}
		}
		
		int p = k;
		
		for(int i = 0; i < k; i++) {
			if(w[i] == 1) {
				continue;
			}
			
			ans += a[p + w[i] - 2];
			p += w[i] - 1;
		}
		
		cout << ans << endl;
	}
}
