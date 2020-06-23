#include<iostream>
#include<algorithm>
using namespace std;

int n, num;
int a[200001];
int b[200001];
int p[200001];

int main() {
	cin >> n;
	
	int ans = 0;
	
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		
		b[a[i]] = i;
	}
	
	for(int i = 0; i < n; i++) {
		cin >> num;
		
		p[(i + n - b[num]) % n]++;
	}
	
	for(int i = 0; i < n; i++) {
		ans = max(ans, p[i]);
	}
	
	cout << ans;
}
