#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T --){
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        int mi = min(a , b);
        int ma = max(a , b);
        bool x = true , y = true;
        for(int i = mi ; i <= ma ; i ++){
            if(i == c || i == d)x = false;
        }
        for(int i = ma ; i !=  mi ; i ++){
            if(i == 13)i = 0;
            if(i == c || i == d)y = false;
        }
        if(x || y)cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}