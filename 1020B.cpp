#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int n;
int d[1001];
bool visited[1001];

int main() {
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
		cin >> d[i];
	}
	
	for(int i = 1; i <= n; i++) {
		memset(visited, false, sizeof(visited));
		visited[i] = true;
		
		int cur = d[i];
		
		while(!visited[cur]) {
			visited[cur] = true;
			cur = d[cur];
		}
		
		cout << cur << ' ';
	}
}
