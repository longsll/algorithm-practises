#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T --){
        int n , res = 0;
        cin >> n;
        for(int i = 0 ; i < n ; i ++){
            int a , b;
            cin >> a >> b;
            if(a - b > 0){
                res ++;
            } 
        }
        cout << res << endl;
    }
    return 0;
}