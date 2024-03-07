#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a , b;
    cin >> a >> b;
    bool f = true;
    for(int i = 1 ; i < n ; i ++){
        int c , d;
        cin >> c >> d;
        if(c >= a && d >= b)f = false;
    }
    if(f)cout << a << endl;
    else cout << "-1\n";
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