#include <bits/stdc++.h>

using namespace std;

int a[200005];
long long ans;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    map<pair<int,char>,int>m;
    for(int i = 0 ; i < n ; i ++){
        pair<int,char> y , n;
        if(s[i] == 'R'){
            n = {a[i] , 'B'};
            y = {a[i] , 'R'};
        }else{
            n = {a[i] , 'R'};
            y = {a[i] , 'B'};
        }
        m[y] ++;
        ans += m[n];
    }
    cout << ans << endl;
    return 0;
}