#include<iostream>
#include<algorithm>
using namespace std;

int n;
int a[200001];
int b[200001];
int p[200001];
int cnt[200001];

int main() {
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", a + i);
		p[a[i]] = i;
	}
	
	for(int i = 0; i < n; i++) {
		scanf("%d", b + i);
		
		int tmp = i - p[b[i]];
		
		if(tmp < 0) {
			tmp += n;
		}
		
		cnt[tmp]++;
	}
	
	int ans = 0;
	
	for(int i = 0; i < n; i++) {
		ans = max(ans, cnt[i]);
	}
	
	printf("%d", ans);
}
