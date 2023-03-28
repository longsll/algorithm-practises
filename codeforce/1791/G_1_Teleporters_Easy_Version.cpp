#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 200005;
int a[N] , b[N];
int solve()
{
    int n , c;
    cin >> n >> c;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        b[i] = i + a[i] + 1;
    }
    sort(b , b + n);
    int res = 0;
    for(int i = 0 ; i < n ; i ++){
        if(c >= b[i]){
            c -= b[i];
            res ++;
        }
    }
    return res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cout << solve() << endl;
    }
    return 0;
}
