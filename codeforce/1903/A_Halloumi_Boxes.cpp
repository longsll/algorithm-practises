#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int a[N];

void solve()
{
    int n , m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
    }
    if(m < 2){
        for(int i = 2 ; i <= n ; i ++)
            if(a[i] < a[i - 1]){
                cout << "NO\n";
                return ;
            }
    }
    cout << "YES\n";
    return ;
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