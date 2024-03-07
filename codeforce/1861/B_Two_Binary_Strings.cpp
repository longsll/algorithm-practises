#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string a , b;
    cin >> a;
    cin >> b;
    int n = a.size() , c0 = -1 , c1 = -1;
    for(int i = 0 ; i < n - 1; i ++){
        if(a[i]=='0'&&a[i+1]=='1'&&b[i]=='0'&&b[i+1]=='1'){
            cout<<"YES\n";
            return ;
        }
    }
    cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
}