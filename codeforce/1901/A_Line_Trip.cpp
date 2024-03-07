#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;
int a[N];

void solve()
{
    int n , x;
    cin >> n >> x;
    memset(a , 0 , sizeof a);
    for(int i = 1 ; i <= n ; i ++){
        int t;
        cin >> t;
        a[t] = 1;
    }
    //枚举初始
    for(int i = 0 ; i < 300 ; i ++){
        bool f = true;
        int c = i;
        for(int j = 1 ; j < x ; j ++){
            if(a[j])c = i;
            c --;
            if(c < 0)f=false;
        }
        for(int j = x ; j > 0 ; j --){
            if(a[j])c = i;
            c --;
            if(c < 0)f=false;
        }
        if(f){
            cout << i << endl;
            return ;
        }
    }
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