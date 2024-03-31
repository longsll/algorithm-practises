#include <bits/stdc++.h>

using namespace std;
int n , m , x;
const int N = 1e5 + 10;
int a[N];
int main()
{
    cin >> n >> x;
    for(int i = 1 ; i <= n ; i ++)cin >> a[i];
    sort(a+1 , a + n + 1);
    int cnt = 0 , left = x;
    for(int i = 1 ; i <= n ; i ++){
        if(a[i] <= x){
            cnt ++;
            left = x - a[i];
        }else break;
    }
    cout << cnt << " " << left << endl;
}