#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int t;
    if(n == 1){
        if(m == 0){
            puts("1");
            return 0;
        }else{
             puts("-1");
            return 0;
        }
    }
    if(n & 1){
        t = (n - 1) / 2 ;
        if( t > m){
            puts("-1");
            return 0;
        }
    }else{
        t = n / 2;
        if(n / 2 > m){
            puts("-1");
            return 0;
        }
    }
    int k = m - t + 1;
    cout << k <<" "<< 2 * k << " ";
    for(int i = 3 ; i <= n ; i ++){
        cout << 2 * k + i - 2 <<" ";
    }
}