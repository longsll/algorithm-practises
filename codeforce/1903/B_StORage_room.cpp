#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 10;
int a[N] , m[N][N];

void solve()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        a[i]=(1<<30)-1;
        for(int j=1;j<=n;j++){
            cin>>m[i][j];
            if(i!=j)a[i]&=m[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i!=j)&&((a[i]|a[j])!=m[i][j])){
                cout << "NO\n";
                return ;
            }
        }
    }

    cout << "YES\n";
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }    
    cout << endl;
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