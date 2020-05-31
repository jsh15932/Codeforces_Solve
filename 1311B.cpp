#include<iostream>
#include<map>
#include<cstring>
#include<algorithm>
using namespace std;

int n, m, t, k;
int d[101];

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> m;
		
		for(int i = 0; i < n; i++) {
			cin >> d[i];
		}
		
		map < int, int > mp;
		
		for(int i = 0; i < m; i++) {
			cin >> k;
			mp[k]++;
		}
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n - i - 1; j++) {
				if(d[j] > d[j + 1] && mp[j + 1]) {
					swap(d[j], d[j + 1]);
				}
			}
		}
		
		k = 1;
		
		for(int i = 1; i < n; i++) {
			if(d[i] < d[i - 1]) {
				k = 0;
				
				break;
			}
		}
		
		if(k) {
			cout << "YES" << '\n';
		}
		
		else {
			cout << "NO" << '\n';
		}
	}	
}
