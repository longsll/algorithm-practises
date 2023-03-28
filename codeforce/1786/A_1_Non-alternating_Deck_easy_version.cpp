#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
typedef long long ll;

void solve()
{
    int t;
    int resa = 0 , resb = 0;
    cin >> t;
    for(int i = 0 ;  ; i ++){
        if(t <= 0)break;
        if(i&1){
            if(t <= 1 + 4 * i){
               resb += t;
               break; 
            }else resb += 1 + 4 * i;
        }else{
            if(t <= 1 + 4 * i){
               resa += t;
               break; 
            }else resa += 1 + 4 * i;
        }
        t -= ( 1 + 4 * i);
    }
    cout << resa << " "<<resb << " \n";
}

int main()
{
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}