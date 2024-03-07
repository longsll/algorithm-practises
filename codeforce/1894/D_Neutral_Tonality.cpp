#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;

void solve()
{
    int n , m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n + m);
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    for(int i = 0 ; i < m ; i ++)cin >> b[i];
    sort(b.rbegin() , b.rend()); //反向排序
    merge(a.begin(), a.end(), b.begin(), b.end(),c.begin(), greater<int>()); //归并排序
    for (int i = 0; i < n + m; i++) {
        cout << c[i] << ' ';
    }
  cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}