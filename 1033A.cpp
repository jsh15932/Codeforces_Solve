#include<iostream>
#include<algorithm>
using namespace std;

int n;
int a1, a2;
int b1, b2;
int c1, c2;
bool chk;

int main() {
	cin >> n;
	
	cin >> a1 >> a2;
	cin >> b1 >> b2;
	cin >> c1 >> c2;
	
	chk = false;
	
	if((a1 > b1 && a1 > c1) || (a1 < b1 && a1 < c1)) {
		if((a2 > b2 && a2 > c2) || (a2 < b2 && a2 < c2)) {
			chk = true;
		}
	}
	
	if(chk) {
		cout << "YES";
	}
	
	else {
		cout << "NO";
	}
}
