#include<iostream>
#include<algorithm>
using namespace std;
 
int t;
int n, x;
 
int main() {
	cin >> t;
	
	while(t--) {
		cin >> n >> x;
		
		int odd = 0;
		int even = 0;
		
		for(int i = 1; i <= n; i++) {
			int num;
			
			cin >> num;
			
			if(num % 2 == 1) {
				odd++;
			}
			
			else {
				even++;
			}
		}
		
		if(odd != 0) {
			if(even != 0) {
				if(odd % 2 == 1) {
					cout << "Yes" << '\n';
				}
				
				else {
					if(x <= n - 1) {
						cout << "Yes" << '\n';
					}
					
					else {
						cout << "No" << '\n';
					}
				}
			}
			
			else {
				if(x % 2 == 1 && x <= odd) {
					cout << "Yes" << '\n';
				}
				
				else {
					cout << "No" << '\n';
				}
			}
		}
		
		else {
			cout << "No" << '\n';
		}
	}
}
