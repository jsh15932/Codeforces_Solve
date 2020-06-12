#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
 
char s[1001];
int a[1001];
int b[1001];
 
int t, n;
 
int main() {
	cin >> t;
	
	while(t--) {
		int ans = 1001;
		
		scanf("%s", s + 1);
		
		int len = strlen(s + 1);
		
		for(int i = 1; i <= len; i++) {
			a[i] = a[i - 1] + (s[i] == '0');
			b[i] = b[i - 1] + (s[i] == '1');
		}
		
		for(int i = 0; i <= len; i++) {
			ans = min(ans, a[i] + (b[len] - b[i]));
		}
		
		for(int i = 0; i <= len; i++) {
			ans = min(ans, b[i] + (a[len] - a[i]));
		}
		
		cout << ans << endl;
	}
}
