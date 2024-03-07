#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T --){
        int n   = 0, c = 0;
        cin >> n;
        int res = 0;
        for(int i = 1 ; i <= n ; i ++){
            int t;
            cin >> t;
            if(c == 0)c = t;
            else c = (c & t);
            if(c == 0)res ++;
        }
        if(res == 0){
            res = 1;
        }          
        cout << res << endl; 
    }
    return 0;
}