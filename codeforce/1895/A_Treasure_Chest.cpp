#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 10;


void solve()
{
    int x , y , k;
    cin >> x >> y >> k;
    if(y <= x){
        cout << x << endl;
    }else if(x + k >= y){
        cout << y << endl;
    }else if(x + k < y){
        cout << y + (y - x - k) << endl;
    }
}

int main()
{
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}