#include <bits/stdc++.h>

using namespace std;
long long ans , res, a , b , c;
int main()
{
    int n;
    cin >> n;

    for(int i = 1 ; i <= n ; i ++){
        int t;
        cin >> t;
        if(t < 0){
            c = a;
            a = b;
            b = c;
            b ++;
        }else{
            a ++;
        }
        ans += a , res += b;
    }
    cout << res << " " << ans << endl;
    return 0; 
}