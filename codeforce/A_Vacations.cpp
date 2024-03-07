#include <bits/stdc++.h>

using namespace std;

int f[120][5];
int inf = 99999999;
int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        int t;
        cin >> t;
        f[i][0] = min(min(f[i - 1][0] , f[i - 1][1]),f[i - 1][2]) + 1;
        if(t == 1 || t == 3)f[i][1] = min(f[i - 1][0] , f[i - 1][2]);
        else f[i][1] = inf;
        if(t == 2 || t == 3)f[i][2] = min(f[i - 1][0] , f[i - 1][1]);
        else f[i][2] = inf;
    }
    cout << min(min(f[n][0] , f[n][1]),f[n][2]);
    return 0;
}