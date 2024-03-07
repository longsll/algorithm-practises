#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 10;
int a[N] , l[N] , r[N];

void solve()
{
    int n ;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
    }
    //到i和左边全部击败需要的
    for(int i = 1 ; i <= n ; i ++){
        l[i] = max(l[i-1] , a[i] + n - i);
    }
    for(int i = n ; i >= 1 ; i --){
        r[i] = max(r[i+1] , a[i] + i - 1);
    }
    int ans = 2e9;
    for(int i = 1 ; i <= n ; i ++){
        int cur = max(a[i] , max(l[i - 1] , r[i + 1]));
        ans = min(ans , cur);
    }
    cout << ans << endl;
}

int main()
{
    int T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
    return 0;
}