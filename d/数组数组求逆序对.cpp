//https://ac.nowcoder.com/acm/contest/78292/G

#include <bits/stdc++.h>

#define x first
#define y second
#define pb push_back

using namespace std;

const int N = 1e6 + 10;
const int P = 1e9 + 7, INF = 0x3f3f3f3f;

typedef pair<int, int> PII;
typedef pair<double, double> PDD;
typedef long long LL;

int pre[N];//记录a[l]前面每个a[i]的出现次数
int suf[N];//记录a[r]后面每个a[i]的出现次数
int n;
LL k;

int lowbit(int x) {
	return x & -x;
}
//位置x以后加v
void add(int x, int v, int tr[]) {
	for(int i = x; i < N; i += lowbit(i) ) 
		tr[i] += v;
}

LL sum(int x, int tr[]) {
	LL res = 0;
	for(int i = x; i; i -= lowbit(i) )
		res += tr[i];
	return res;
}

void solve() {
    cin >> n >> k;
    
    LL tot = 0, ans = 0;
	int m = 1e6;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i ++ ) {
    	cin >> a[i];
    	add(a[i], 1, suf);
        //比m小出现的次数-比a[i]小出现的次数=比a[i]大出现的次数=a[i]逆序对数量
    	tot += sum(m, suf) - sum(a[i], suf);
    }
    if(tot >= k) ans ++;
	int r = 1, l = 1;
    //滑动窗口l-r
	while(r <= n) {
		add(a[r], -1, suf);
		tot -= sum(a[r] - 1, suf) + sum(m, pre) - sum(a[r], pre);
		while(tot < k && l <= r) {
			add(a[l], 1, pre);
			tot += sum(m, pre) - sum(a[l], pre);
			tot += sum(a[l] - 1, suf);
			l ++;
		}
		ans += r - l + 1;
		r ++;
	}
	cout << ans;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
    int T = 1;
    //cin >> T;
    while(T -- ) {
        solve();
    }
    return 0;
}