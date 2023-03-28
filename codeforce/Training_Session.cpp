#include <iostream>

using namespace std;
const int N = 2 * 100005;
typedef long long ll;
int x[N],y[N];
int cntx[N] , cnty[N];
int T , n;
int main()
{
    cin >> T;
    while(T --)
    {
        cin >> n;
        for(int i = 1 ; i <= n ; i++){
            cntx[i] = 0 , cnty[i] = 0;
        }
        for(int i = 1 ; i <= n ; i ++){
            cin >> x[i] >> y[i];
            cntx[x[i]] ++ , cnty[y[i]]++;
        }
        ll res = (ll)n * (n - 1) * (n - 2) / 6;
        for(int i = 1 ; i <= n ; i ++){
            res -= (ll)(cntx[x[i]] - 1) * (cnty[y[i]] - 1);
        }
        printf("%lld\n",res);
    }
    return 0;
}