#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
long long a[N] , f[N];
int n;

void solve()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        f[i]= -(1ll<<60);
    }
    f[n]=a[n];
    long long s=a[n];
    //加/不加
    for(int i=n-1;i;i--)f[i]=max(f[i+1]+a[i],f[i+1]+s+a[i]),s+=a[i];
    cout<<f[1]<<'\n';
    return ;
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