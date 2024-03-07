#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 10;
int a[N] , b[N];


void solve()
{
    int n;
    cin >> n;
    long long mina = 2e9 , suma = 0 , minb = 2e9 , sumb = 0; 
    for(int i = 1 ; i <= n ; i ++){
        cin >> a[i];
        mina = min(mina , (long long)a[i]);
        suma += a[i];
    }
    for(int i = 1 ; i <= n ; i ++){
        cin >> b[i];
        minb = min(minb , (long long)b[i]);
        sumb += b[i];
    }
    long long ans = min(mina * n + sumb , minb * n + suma);
    cout <<  ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}