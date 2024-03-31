#include <bits/stdc++.h>

using namespace std;
int n , m , x;
const int N = 1e5 + 10;
int a[N];
int main()
{
    long long m;
    cin >> m;
    if(m % 495 == 0){
        cout << "-1";
        return 0;
    }
    m %= 495;
    for(int i = 0 ; i <= 9 ; i ++){
        if((m * 10 + i) % 495 == 0){
            cout << i;
            return 0;
        }
    }
    for(int i = 0 ; i <= 99 ; i ++){
        if((m * 100 + i) % 495 == 0){
            if (i < 10) {
                cout << "0" << i << endl;
                return 0;
            }else{
                cout << i;
                return 0;                
            }
        }
    }
    for(int i = 0 ; i <= 999 ; i ++){
        if((m * 1000 + i) % 495 == 0){
            if(i < 10){
                cout << "00" << i << endl;
            }else if(i >= 10 && i < 100){
                cout << "0" << i << endl;
            }else{
                cout << i;
                return 0;                
            }

        }
    }
    return 0;
}