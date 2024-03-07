#include <bits/stdc++.h>

using namespace std;
const int N = 2e5 + 10;
int INF = 0x3f3f3f3f;
long long a[N], dp[N];

void solve()
{
    long long n , ans = 0 , minn = INF , idx = -1;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        if(a[i] < minn){
            minn = a[i];
            idx = i;
        }
    }
    bool f = true;
    for(int i = idx ; i + 1 < n ; i ++){
        if(a[i] > a[i + 1])f = false;
    }
    if(f){
        cout << idx << endl;
    }else{
        cout << "-1\n";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}