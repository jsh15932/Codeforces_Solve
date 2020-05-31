#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int d[200001] = {0, 1, };
int dp[200001];

int main() {
	cin >> n;
	
	for(int i = 2; i <= n; i++) {
		cin >> d[i];
	}
	
	int tmp = n;
	
	while(tmp != 1) {
		dp[m++] = tmp;
		tmp = d[tmp];
	}
	
	m--;
	
	cout << 1 << ' ';
	
	for(int i = m; i >= 0; i--) {
		cout << dp[i] << ' '; 
	}
}
