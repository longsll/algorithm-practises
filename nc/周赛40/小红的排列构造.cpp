#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N]  , b[N] , ca[N] , cb[N];
int main()
{
    int n;
    cin >> n;
    bool is_vaild = true;
    for(int i = 1 ; i <= n ; i ++){
        int t;
        cin >> t;
        if(ca[t] == 1 && cb[t] == 1){
            is_vaild = false;
        }else if(ca[t] == 0){
            ca[t] = 1;
            a[i] = t;
        }else if(cb[t] == 0){
            cb[t] = 1;
            b[i] = t;
        }
    }
    for(int i = 1  , j = 1; i <= n ; i ++){
        if(ca[i]){
            continue;
        }
        while(1){
            if(a[j] != 0)j ++;
            else{
                a[j] = i;
                break;
            }
        }
    }
    for(int i = 1  , j = 1; i <= n ; i ++){
        if(cb[i]){
            continue;
        }
        while(1){
            if(b[j] != 0)j ++;
            else{
                b[j] = i;
                break;
            }
        }
    }
    if(is_vaild){
        for(int i = 1 ; i <= n ; i ++){
            cout << a[i] << " ";
        }   
        cout << endl;
        for(int i = 1 ; i <= n ; i ++){
            cout << b[i] << " ";
        }     
    }else{
        cout << -1 << endl;
    }
    return 0;
}