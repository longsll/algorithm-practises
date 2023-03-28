#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
typedef long long ll;

void solve()
{
    int t;
    int resawite = 0 , resablack = 0 , resbwite = 0 , resbblack = 0 ;
    cin >> t;
    for(int i = 0 ;  ; i ++){
        if(t <= 0)break;
        ll c = 1 + 4 * i;
        if(i&1){
            if(t <= c){
               if(t & 1){
                    resbwite += t / 2;
                    resbblack += (t - (t / 2));
               }else{
                    resbwite += t / 2;
                    resbblack += t/2;
               }
               break; 
            }else {
                resbwite += c / 2;
                resbblack += (c - (c / 2));
            }
        }else{
            if(t <= 1 + 4 * i){
               if(t & 1){
                    resablack += t / 2;
                    resawite += (t - (t / 2));
               }else{
                    resablack += t / 2;
                    resawite += t/2;
               }
               break; 
            }else {
                resablack += c / 2;
                resawite += (c - (c / 2));
            }
        }
        t -= ( 1 + 4 * i);
    }
    cout << resawite << " "<< resablack << " " << resbwite <<  " "<< resbblack << " \n";
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