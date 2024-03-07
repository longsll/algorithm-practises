#include <bits/stdc++.h>

using namespace std;
const int N = 2e3 + 10;
int a[N][N] , d[N][N];
void solve()
{
    int n , m;
    cin >> n >> m;
    memset(a , 2 , sizeof(a));
    memset(d , 0x3f , sizeof(d));
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            cin >> a[i][j];
        }
    }
    d[1][1] = 0;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            if(a[i][j] == a[i - 1][j]){
                d[i][j] = min(d[i][j] , d[i - 1][j] + 1);
            }else d[i][j] = min(d[i][j] , d[i - 1][j] + 2);
            if(a[i][j] == a[i][j - 1]){
                d[i][j] = min(d[i][j] , d[i][j - 1] + 1);
            }else d[i][j] = min(d[i][j] , d[i][j - 1] + 2);
        }
        for(int j = m ; j >= 1 ; j --){
            if(a[i][j] == a[i][j + 1]){
                d[i][j] = min(d[i][j] , d[i][j + 1] + 1);
            }else d[i][j] = min(d[i][j] , d[i][j + 1] + 2);
        }
    }
    cout << d[n][m];
}
int main()
{
    int T = 1;
    while(T --){
        solve();
    }
    return 0;
}