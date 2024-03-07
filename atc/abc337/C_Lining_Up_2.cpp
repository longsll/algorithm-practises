#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 3e5 + 10 , M = 2 * N;
int a[N];
int h[N], e[M], ne[M], idx;

void add(int a, int b)
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx ++ ;
}

void solve()
{
    int n ;
    cin >> n;
    memset(h , -1 , sizeof(h));
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        if(a[i] == -1)a[i] = 0;
        add(a[i] , i);
    }
    for(int i = h[0];e[i] != 0;i = h[e[i]]){
        cout << e[i] << " ";
    }
}

int main()
{
    int T = 1;
    // cin >> T;
    while(T --){
        solve();
    }
    return 0;
}