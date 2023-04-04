#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;

typedef long long ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		set<int> S;
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			S.insert(k);
		}
		for (int i = 0; i < m; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			ll v = 4 * (ll)a * c;
			if (v <= 0) {
				cout << "NO\n";
			} else {
				ll sq = sqrt(v);
				while (sq * sq >= v) sq--;
				while ((sq + 1) * (sq + 1) < v) sq++;
				int l = b - sq, r = b + sq;
				auto p = S.lower_bound(l);
				if (p != S.end() && *p <= r) {
					cout << "YES\n";
					cout << (*p) << '\n';
				} else {
					cout << "NO\n";
				}
			}
		}
	}
	return 0;
}
