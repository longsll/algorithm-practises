#include <iostream>

using namespace std;
int n,m,k;
int p[1005];
bool st[1005];
int res;
int find(int x){
    if(p[x] != x)p[x] = find(p[x]);
    return p[x];
}
int main()
{
    cin >> n >> m;
    cin >> k;
    for(int i = 1 ; i <= n * m ; i ++)p[i] = i;
    while(k --)
    {
        int a,b;
        cin >> a >> b;
        int x = find(a) , y = find(b);
        if(x != y)p[x] = y;
    }
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <= m ; j ++){
            if(st[find(i * j)])continue;
            st[find(i * j)] = true;
            res ++;
        }
    }
    cout << res;
    return 0;
}