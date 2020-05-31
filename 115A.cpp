#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;
int d[2001];
vector <int> vc[2001];
vector <int> p;

int Solve(int node) {
	int k = 0;
	
	for(int i = 0; i < vc[node].size(); i++) {
		k = max(k, Solve(vc[node][i]) + 1);
	}
	
	return k;
}

int main() {
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> m;
		
		if(m == -1) {
			p.push_back(i);
		}
		
		else {
			m--;
			vc[m].push_back(i);
		}
	}
	
	int res = 0;
	
	for(int i = 0; i < p.size(); i++) {
		res = max(res, Solve(p[i]));
	}
	
	cout << res + 1;
}
