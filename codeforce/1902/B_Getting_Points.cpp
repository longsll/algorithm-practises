#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n , p , l , t;
    cin >> n >> p >> l >> t;
    int wk = ((n +6)/7) ,ans = 0;
    // cout << wk << endl;
    long long a = l + 2 * t;
    ans =ceil((double)p/ a);
    if(ans > (wk / 2))ans = wk / 2;
    p -= a * ans;
    if(p > 0 && (wk & 1)){
        ans ++;
        p-= l + t;
    }
    if(p > 0) ans += ceil((double)p/ l);
    cout << n - ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
    return 0;
}