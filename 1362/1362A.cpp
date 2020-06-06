#include<iostream>
#include<algorithm>
using namespace std;

int t;
long long int a, b;

int main() {
	cin >> t;
	
	while(t--) {
		int cnt = 0;
		
		cin >> a >> b;
		
		if(a > b) {
			while(a > b) {
				if(a % 8 == 0 && a / 8 >= b) {
					a /= 8;
					cnt++;
				}
				
				else if(a % 4 == 0 && a / 4 >= b) {
					a /= 4;
					cnt++;
				}
				
				else if(a % 2 == 0 && a / 2 >= b) {
					a /= 2;
					cnt++;
				}
				
				else {
					break;
				}
			}
		}
		
		else {
			while(a < b) {
				if(a * 8 <= b) {
					a *= 8;
					cnt++;
				}
				
				else if(a * 4 <= b) {
					a *= 4;
					cnt++;
				}
				
				else if(a * 2 <= b) {
					a *= 2;
					cnt++;
				}
				
				else {
					break;
				}
			}
		}
		
		cout << (a == b ? cnt : -1) << endl;
	}
}
