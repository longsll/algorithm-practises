#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
const int INF = 1e9;
int a[N], b[N];
int n , k , mx;
int gcd(int aa, int bb)
{
    return bb ? gcd(bb, aa % bb) : aa;
}

void solve()
{
    
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if(n == 1){
        cout << "1\n";
        return ;
    }
    sort(a + 1, a + n + 1);
    k = 0;
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        k = gcd(k, a[i] - a[i - 1]);
    }
    for (int i = 1; i <= n; i++)
    {
        ans += (a[n] - a[i])/k;
    }
    int d = 0x3f3f3f3f;
    for(int i = n; i >= 2; -- i){
        if((a[i] - a[i - 1]) / k > 1){
            d = a[i] - k;
            break;
        }
    }
    if(d == 0x3f3f3f3f)ans += n;
    else ans +=  (abs(a[n]-d)/k);
    cout << ans << endl;
}

main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}