#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if(n < 50){
        for(int i = 1 ; i < n ; i ++){
            for(int j = 1 ; j < n ; j ++){
                for(int k = 1 ; k < n ; k ++){
                    if(i + j + k == n){
                       if(i != j && j != k && i != k){
                            if(i %3 != 0 && j %3 != 0 && k %3 != 0){
                                cout << "YES\n";
                                cout << i << " " << j << " " << k << endl;
                                return ;
                            }
                       } 
                    }
                }
            }
        }
        cout << "NO\n";
        return ;
    }
    cout << "YES\n";
    if((n-3) %3 == 0){
        cout << 1 << " " << 4 << " " << n-5 << endl;
    }else{
        cout << 1 << " " << 2 << " " << n-3 << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
}