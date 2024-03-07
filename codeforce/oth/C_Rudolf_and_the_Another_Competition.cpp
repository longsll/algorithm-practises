#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N];

void solve()
{
    int n , m , t;
    cin >> n  >> m >> t;
    int rank = 1 , ad  , adl;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> a[j];
        }
        sort(a , a + m);
        long long tot = 0 , fs = 0 , ti = 0;
        for(int j = 0 ; j < m ; j ++){
            tot += a[j];
            if(tot > t)break;
            ti ++;
            fs = fs + tot;
        }
        if(i == 0){
            ad = ti;
            adl = fs;
        }else{
            if(ti > ad){
                rank ++;
            }else if(ti == ad && fs < adl){
                rank ++;
            }
        }
    }
    cout << rank << endl;
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