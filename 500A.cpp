#include<iostream>
#include<algorithm>
using namespace std;

int n, t;
int d[30001] = {0, };
bool chk;

int main() {
	cin >> n >> t;
	
	for(int i = 1; i < n; i++) {
		cin >> d[i];
	}
	
	int m = 1;
	
	while(t >= m) {
		if(t == m) {
			chk = true;
			break;
		}
		
		m = d[m] + m;
	}
	
	if(chk == true) {
		cout << "YES";
	}
	
	else {
		cout << "NO";
	}
}
