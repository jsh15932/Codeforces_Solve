#include<iostream>
#include<algorithm>
using namespace std;

int n, m;
int x[101];
int y[101];
bool chk[101];

void Solve(int a) {
	chk[a] = true;
	
	for(int i = 0; i < n; i++) {
		if(!chk[i] && (x[i] == x[a] || y[i] == y[a])) {
			Solve(i);
		}
	}
}

int main() {
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(!chk[i]) {
			m++;
			
			Solve(i);
		}
	}
	
	cout << m - 1;
}
