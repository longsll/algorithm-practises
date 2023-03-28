#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 2e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;

ll tr[N];
ll a[N] , b[N] , c[N];
ll k = 0;
int n;

int lowbit(int x)
{
    return x & -x;
}

void add(int x, int c)//x位置加上c
{
    for (int i = x; i <= n; i += lowbit(i)) tr[i] += c;
}

int sum(int x)//前x个数的和
{
    int res = 0;
    for (int i = x; i; i -= lowbit(i)) res += tr[i];
    return res;
}

void solve()
{
    
    cin >> n;
    memset(tr, 0, sizeof tr);
    memset(a, 0, sizeof a);
    for(int i = 1 ; i <= n ; i ++){
            cin >> c[i];
            k += c[i];
            add(i, c[i] - c[i - 1]);
    }
    k /= n;
    for(int i = n ; i >= 1 ; i --){
        if(sum(i) == i){
            a[i] = 1;
        }else{
            a[i] = 0;
        }
        add(i-k+1, -1);
        if(a[i]==1)k--;
    }
    for(int i = 1 ; i <= n ; i ++){
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
    return 0;
}