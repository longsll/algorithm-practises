#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T --){
        int a , b , c;
        cin >> a >> b >> c;
        if(c % 2 == 0){
            if(a <= b){
                cout << "Second\n";
            }else{
                cout << "First\n";
            }
        }else{
            if(b <= a){
                cout << "First\n";
            }else{
                cout << "Second\n";
            }
        }
    }
    return 0;
}