#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
int p[20];
void dfs(int u)
{
    if(u > n)
    {
        for(int i = 1 ; i <= n ; i ++){
            if(p[i] == 1)cout << i << " ";
        }
        cout << endl;
        return ;
    }

    p[u] = 2;
    dfs(u + 1);
    p[u] = 1;
    dfs(u + 1);
    p[u] = 0;
}

int main()
{
    cin >> n;
    dfs(1);
    return 0;
}
