#include <bits/stdc++.h>
#define debug_(x) cerr << #x << " = " << x << ' '
#define debug(x) cerr << #x << " = " << x << '\n'

using namespace std;
const int N = 1e5 + 5;
const int INF = 0x3f3f3f3f;
const int mod = 1e8 + 7;
typedef long long ll;

int a[50];

int main()
{
    int n , m;
    cin >> n >> m;
    //二进制压缩
    for(int i = 0 ; i < m ; i ++){
        int c;
        cin >> c;
        while(c --){
            int x;
            cin >> x;
            x --;
            a[i] |= 1 << x;
        }
    }
    int all = (1 << n) - 1 , ans = 0;
    //枚举m的全排列
    for(int i = 0 ; i < 1 << m ; i ++){
        int x = 0;
        //将选到的数并起来
        for(int j = 0 ; j < m ; j ++){
            if(i >> j & 1){
                x |= a[j];
            }
        }
        ans += (x == all);
    }
    cout << ans << "\n";
    return 0;
}