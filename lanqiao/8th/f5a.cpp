#include <bits/stdc++.h>

using namespace std;
int p[105][105];
bool st[105];
int n , m;
int res;
int main()
{
    cin >> n >> m;
    while(m --)
    {
        int a,b;
        cin >> a >> b;
        p[a][b] = 1;
        p[b][a] = 1;   
    }
    for(int i = 1 ; i <= n ; i ++){
        if(st[i])continue;
        st[i] = true;
        for(int j = 1 ; j <= n ; j ++){
            if(st[j])continue;
            if(p[i][j])continue;
            else st[j] = true;
        }
        res ++;
    }
    cout << res ;
    return 0;
}