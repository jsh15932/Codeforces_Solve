#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int t, n;
string s;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> n;
		cin >> s;
		
		int i = 0;
		int j = n;
		
		while(i < n && s[i] == '0') {
			i++;
		}
		
		while(j > 0 && s[j - 1] == '1') {
			j--;
		}
		
		if(i == j) {
			cout << s << endl;
		}
		
		else {
			cout << s.substr(0, i) + '0' + s.substr(j) << endl;
		}
	}
}
