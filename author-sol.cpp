#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int n;
	cin >> n;
	vector<int> r(n);
	for(int i = 0; i < n; i++) {
		cin >> r[i];
	}
	int m;
	cin >> m;
	vector<int> b(m);
	for(int i = 0; i < m; i++) {
		cin >> b[i];
	}
	// find the highest prefix sum in red an blue
	// and add them together for the final answer
	partial_sum(r.begin(), r.end(), r.begin());
	partial_sum(b.begin(), b.end(), b.begin());
	int highest_pref_red = max(0, *max_element(r.begin(), r.end()));
	int highest_pref_blue = max(0, *max_element(b.begin(), b.end()));
	cout << highest_pref_red + highest_pref_blue << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
