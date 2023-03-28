#include <bits/stdc++.h>

using namespace std;
const int N = 2 * 1e5 + 5;
typedef long long ll;
int n , k , Q;
int a[N] ;
int d[N];
ll s[N][20];

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        d[i] += a[i] , d[i + 1] -= a[i];//d差分数组
        for(int j = 0 ; j < k ; j ++){ // 对所有i % k == j的d[i]求前缀和
            s[i][j] += s[i - 1][j];
            if(i % k == j)s[i][j] += d[i];
        }

    }

    cin >> Q;
    while(Q --){
        int l , r;
        cin >> l >> r;
        bool f = true;
        for(int j = 0 ; j < k ; j ++){
            if((r + 1) % k == j)continue;
            if(l % k == j){
                if(s[r][j] - s[l - 1][j] != - a[l - 1])f = false;
                continue;
            }
            if(s[r][j] - s[l - 1][j] != 0)f = false;
        }
        if(f)puts("Yes");
        else puts("No");
    }
    return 0;
}