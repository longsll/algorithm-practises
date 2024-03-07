#include <bits/stdc++.h>

using namespace std;
const int N=1e5+10;
char s[N];

void solve(){
    int n , k , cb = 0 , ans = 0;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i ++){
        cin >> s[i];
        if(s[i] == 'B')cb ++;
    }
    if(cb == k){
        cout << "0\n";
        return ;
    }else{
        cout << "1\n";    
    }
    while(cb < k){
        for(int i = 1 ; i <= n ; i ++){
            if(s[i] == 'A'){
                cb ++;
                if(cb == k){
                    cout << i << " B" << endl;
                    return ;
                }
            }
        }
    }
    while(cb > k){
           for(int i = 1 ; i <= n ; i ++){
            if(s[i] == 'B'){
                cb --;
                if(cb == k){
                    cout << i << " A" << endl;
                    return ;
                }
            }
        }     
    }
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