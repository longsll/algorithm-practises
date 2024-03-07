#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n , k;
    cin >> n >> k;
    long long cur = 1;
    for(int i = 1 ; i <= n ; i ++){
        int t;
        cin >> t;
        cur *= t;
    }
    if(cur > 2023 || 2023 % cur != 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        cout << 2023/cur << " ";
        for(int i = 1 ; i < k ; i ++)cout << 1 << " ";
        cout << endl;
    }
}

int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}