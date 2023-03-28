#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 100005 , M = 2 * N;
int h[N], ne[M], e[M], idx;
int path[N], len,p[N];
int n;
bool f = false;
int find(int x){
    if(x != p[x])p[x] = find(p[x]);
    return p[x];
}
void add(int a, int b)
{
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}
void dfs(int s ,int u ,int father ,int x)
{
    for(int i = h[u] ; i != -1 ; i = ne[i]){
        int j = e[i];
        if(j == father)continue;
        if(j == s){
            len = x;
            sort(path,path + x);
            if(!f)for (int i = 0; i < x ; i++)cout << path[i] << " ";
            f = true;
            return ;
        }
        path[x] = j;
        dfs(s,j,u,x + 1);
    }
}
int main()
{
    cin >> n;
    memset(h, -1, sizeof h);
    for(int i = 1 ; i <= n ; i ++)p[i] = i;
    int u ;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        add(a, b);
        add(b, a);
        int x = find(a) , y = find(b);
        if(x != y)p[x] = y;
        else u = a;
    }
    path[0] = u;
    dfs(u,u,-1,1);
    return 0;
}
