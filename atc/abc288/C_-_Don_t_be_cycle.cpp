#include <bits/stdc++.h>

using namespace std;
const int N = 2 * 1e5 + 5;
int p[N];
int n , m;
int res = 0;

int find(int x){
    if(p[x] != x)p[x] = find(p[x]);
    return p[x];
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i ++)p[i] = i;
    for(int i = 1 ; i <= m ; i ++){
        int a , b;
        cin >> a >> b;
        if(find(a) != find(b)){
            p[find(a)] = find(b);
        }else{
            res ++;
        }
    }
    cout << res << endl;
    return 0;
}