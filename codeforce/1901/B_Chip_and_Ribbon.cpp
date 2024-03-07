#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;
int a[N];

void solve()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
    }
    long long ans = 0;
    for(int i = 1 ; i <= n ; i ++){
        if(a[i] > a[i-1]){
            ans += a[i] - a[i-1];
        }
    }
    cout << ans - 1 << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}