#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 5;
const int INF = 0x3f3f3f3f;
typedef long long ll;
int a[N] , b[N];

void solve()
{
    int n , w ,h;
    cin >> n >> w >> h;
    for(int i = 1 ; i <= n ; i ++)cin >> a[i];
    for(int i = 1 ; i <= n ; i ++)cin >> b[i];
    int L = -0x3f3f3f3f , R = 0x3f3f3f3f;
    for(int i = 1 ; i <= n ; i ++){
        int cl = a[i] - w , cr = a[i] + w , dl = b[i] - h , dr = b[i] + h;
        int l = dr - cr , r = dl - cl;
        L = max(L , l);
        R = min(R , r);
    }
    if(L <= R)puts("YES");
    else puts("NO");
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}