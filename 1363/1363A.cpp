#include<iostream>
#include<algorithm>
using namespace std;

int t, n, x;
int num;

int main() {
	cin >> t;
	
	while(t--) {
		int odd = 0;
		int even = 0;
		
		cin >> n >> x;
		
		for(int i = 0; i < n; i++) {
			cin >> num;
			
			if(num % 2 == 1) {
				odd++;
			}
			
			else {
				even++;
			}
		}
		
		if(odd == 0) {
			cout << "No" << endl;
		}
		
		else {
			if(even == 0) {
				if(x % 2 == 1) {
					cout << "Yes" << endl;
				}
				
				else {
					cout << "No" << endl;
				}
			}
			
			else {
				if(odd % 2 == 1) {
					cout << "Yes" << endl;
				}
				
				else {
					if(x == n) {
						cout << "No" << endl;
					}
					
					else {
						cout << "Yes" << endl;
					}
				}
			}
		}
	}
}
