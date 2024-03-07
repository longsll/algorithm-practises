#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int a[N];

void solve()
{
    int n , m , k;
    cin >> n >> m >> k;
    if(n+m-2>k||(k-(n+m-2))%2){
        cout << "No\n";
        return ;
    }
    cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            int t=1;
            for(int j=1;j<m;j++){
                if(t){
                    cout<<"R ";
                }else{
                    cout<<"B ";
                }
                t^=1;
            }
            cout<<endl;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=m;j++){
                if(j<=2&&i==1){
                    cout<<"B ";
                }else{
                    if((i+j)%2==0){
                        cout<<"R ";
                    }else{
                        cout<<"B ";
                    }
                }
            }
            cout<<endl;
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