#include <bits/stdc++.h>
#include <map>

using namespace std;
const int N = 200005;
int d[N];
int p[N];
bool f = true;
int find(int x){
    if(x != p[x])p[x] = find(p[x]);
    return p[x];
}
int main()
{
    int n, m;
    cin >> n >> m;
    if(n != m + 1)f = false;
    for(int i = 1 ; i <= n ; i ++)p[i] = i;
    for (int i = 1; i <= m; i++)
    {
        int a,b;
        cin >> a >> b;
        p[find(a)] = find(b);
        d[a] ++ , d[b] ++;
    }
    int k = 2;
    for (int i = 1; i <= n; i++)
    {
        if(find(1) != find(i))f = false;
        if(d[i] == 2)continue;
        else if(d[i] == 1)k --;
        else f = false;
    }
    if(k != 0)f = false;
    if(f)puts("Yes");
    else puts("No");
    return 0;
}