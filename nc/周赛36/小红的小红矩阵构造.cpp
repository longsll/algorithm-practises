#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;

int a[105][105];
int main()
{
    int n , m , x;
    cin >> n >> m >> x;
    int sum = 0 , f = 1 , xorsum = 0;
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j ++){
            cin >> a[i][j];
            sum += a[i][j];
        }
    }
    if(sum != x)f = 0;
    for(int j = 0 ; j < m ; j ++){
        xorsum ^= a[0][j];
    }
    for(int i = 1 ; i < n ; i ++){
        int cursum = 0;
        for(int j = 0 ; j < m ; j ++){
            cursum ^= a[i][j];
        }
        if(cursum != xorsum)f = 0;
    }
    for(int j = 0 ; j < m ; j ++){
        int cursum = 0;
        for(int i = 0 ; i < n ; i ++){
            cursum ^= a[i][j];
        }
        if(cursum != xorsum)f = 0;
    }
    if(f)cout << "accepted";
    else cout << "wrong answer";
    return 0;
}