#include <bits/stdc++.h>

using namespace std;
int s[10005];
int main()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i ++ )cin >> s[i];
    for (int i = 0; i < n; i ++ ){
        int minv = 10005 , maxv = -10005;
        for(int j = i ; j < n ; j ++){
            minv = min(minv , s[j]);
            maxv = max(maxv , s[j]);
            if(maxv - minv == j - i)res ++; 
        }
    }
    cout << res;
    return 0;
}
