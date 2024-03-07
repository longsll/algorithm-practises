#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 10;
int a[N];
int main()
{
    int n , m , k;
    cin >> n >> m >> k;
    for(int i = 1 ; i <= m ; i ++)a[i] = n; 
    while(k --){
        int x , y;
        cin >> x >> y;
        if(a[y] <= n - x)continue;
        a[y] --;
    }
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= m ; j ++){
            if(a[j] >= n - i + 1)cout << "*";
            else cout << ".";
        }
        cout << "\n";
    }
    return 0;
}