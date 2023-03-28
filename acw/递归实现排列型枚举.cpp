#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
int p[20];
bool st[20];
void dfs(int u)
{
    if(u > n)
    {
        for(int i = 1 ; i <= n ; i ++){
            cout << p[i] << " ";
        }
        cout << endl;
        return ;
    }
    for(int i  = 1 ; i <= n ; i ++){
        if(!st[i]){
            p[u] = i;
            st[i] = true;
            dfs(u + 1);
            st[i] = false;
        }
    }
}

int main()
{
    cin >> n;
    dfs(1);
    return 0;
}
