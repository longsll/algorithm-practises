#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    int n , k;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i ++)cin >> a[i];
    sort(a , a + n);
    int c = 0;
    for(int l = 0 , r = 0 ; r < n ; r ++){
        while(a[r] - a[l] > k)l ++;
        c = max(c , r - l + 1);
    }
    cout << (double) c / n << endl;
}