#include <bits/stdc++.h>

using namespace std;
string s = "codeforces";
void solve(){
    char a;
    cin >> a;
    bool f = false;
    for(int i = 0 ; i < s.length() ; i ++){
        if(s[i] == a)f = true;
    }
    if(f)puts("YES");
    else puts("NO");
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
    return 0;
}
