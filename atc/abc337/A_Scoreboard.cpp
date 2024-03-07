#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    ll a = 0 , b = 0;
    while(n --){
        int x , y;
        cin >> x >> y;
        a += x;
        b += y;
    }
    if(a > b)cout << "Takahashi\n";
    else if(a < b)cout << "Aoki\n";
    else cout << "Draw\n";
}

int main()
{
    int T = 1;
    // cin >> T;
    while(T --){
        solve();
    }
    return 0;
}