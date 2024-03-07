#include <bits/stdc++.h>

using namespace std;
int a[505];
int main()
{
    int T;
    cin >> T;
    while(T --){
        int n , k;
        cin >> n >> k;
        int l;
        cin >> l;
        if(n == 1){
            cout << '0'  << endl;
            continue;
        }
        for(int i = 1 ; i < n ; i ++){
            int t;
            cin >> t;
            int c = abs(l - t);
            a[i] = c;
            l = t;
        }
        sort(a + 1 , a + n);
        long long res = 0;
        for(int i = 1 ; i <= (n - 1 - (k - 1)) ; i ++){
            res += a[i];
        }
        cout << res << endl;
    }
    return 0;
}