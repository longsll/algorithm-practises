#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 200005;
int n, c;
int a[N];
ll tr[N];

int lowbit(int x)
{
    return x & -x;
}

void add(int x, int c)
{
    for (int i = x; i <= n; i += lowbit(i)){
        tr[i] += c;
    } 
}

ll sum(int x)
{
    ll res = 0;
    for (int i = x; i; i -= lowbit(i)) res += tr[i];
    return res;
}

int h(int x){
    int res = 0;
    while(x){
        res += x % 10;
        x /= 10;
    }
    return res;
}

void solve()
{
    cin >> n >> c;
    for(int i = 1 ; i <= n ; i ++)cin >> a[i];
    while(c --){
        int k;
        cin >> k;
        if(k == 1){
            int l , r;
            cin >> l >> r;
            add(l ,1) , add(r + 1 , -1);
        }else{
            int x;
            cin >> x;
            if(sum(x) >= 2){
                int f = h(a[x]);
                cout << h(f) << endl;
            }else if(sum(x) == 1){
                cout << h(a[x]) << endl;
            }else{
                cout << a[x] << endl;
            }
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
