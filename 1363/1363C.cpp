#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
 
int t, n, x;
int a, b;
int d[1001];
 
int main() {
	cin >> t;
	
	while(t--) {
		memset(d, 0, sizeof(d));
		
		cin >> n >> x;
		
		for(int i = 1; i < n; i++) {
			cin >> a >> b;
			
			d[a]++;
			d[b]++;
		}
		
		if(d[x] == 1 || n % 2 == 0 || n == 1) {
			cout << "Ayush" << '\n';
		}
		
		else {
			cout << "Ashish" << '\n';
		}
	}
}
