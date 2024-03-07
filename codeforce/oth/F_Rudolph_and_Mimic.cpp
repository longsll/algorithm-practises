#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'
//#define debug_vec(vec) cerr << #vec << ": ["; for (auto x : vec) cerr << x << ' '; cerr << "]\n"

using namespace std;
using i64 = int64_t;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		vector<int> a(n), b;
		for (auto & it : a) cin >> it;
		
		auto upd = [&]() {
			array<int, 10> A{}, B{};
			for (auto v : a) A[v] += 1;
			for (auto v : b) B[v] += 1;
			a = b;
			for (int i = 1; i <= 9; i++) {
				if (B[i] > A[i]) return i;
			}
			return -1;
		};
		
		auto ers = [&](int v) {
			vector<int> del, new_a;
			for (int i = 0; i < n; i++) {
				if (a[i] != v) {
					del.push_back(i);
				} else {
					new_a.push_back(a[i]);
				}
			}
			a = new_a;
			cout << "- " << del.size();
			for (auto v : del) cout << ' ' << v + 1;
			cout << endl;
			n -= del.size();
			b.resize(n);
			for (int i = 0; i < n; i++) cin >> b[i];
		};
		
		int q1 = -1;
		while (q1 == -1) {
			cout << "- 0" << endl;
			b.resize(n);
			for (int i = 0; i < n; i++) {
				cin >> b[i];
			}
			q1 = upd();
		}
		ers(q1);
		int ans = upd();
		while (ans == -1) {
			cout << "- 0" << endl;
			b.resize(n);
			for (int i = 0; i < n; i++) {
				cin >> b[i];
			}
			ans = upd();
		}
		for (int i = 0; i < n; i++) {
			if (a[i] == ans) {
				cout << "! " << i + 1 << endl;
			}
		}
	}
	
	return 0;
}