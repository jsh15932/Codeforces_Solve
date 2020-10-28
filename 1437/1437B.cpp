#include<bits/stdc++.h>
using namespace std;

int t, n;
char c[100005];

int main() {
	scanf("%d", &t);
	
	while(t--) {
		scanf("%d %s", &n, c);
		
		int a = 0, b = 0;
		
		for(int i = 1; c[i] != 0; i++) {
			if(c[i - 1] == c[i]) {
				if(c[i] == '0') {
					a++;
				}
				
				else {
					b++;
				}
			}
		}
		
		printf("%d\n", max(a, b));
	}
}
