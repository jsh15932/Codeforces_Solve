#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int t;
string s;

int main() {
	cin >> t;
	
	while(t--) {
		cin >> s;
		
		string ans;
		
		for(int i = 0; i < s.size(); i += 2) {
			ans += s[i];
		} 
		
		ans += s.back();
		
		cout << ans << endl;
	}
}
