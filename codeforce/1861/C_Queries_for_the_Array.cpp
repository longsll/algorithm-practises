#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int cnt = 0 , n1 = 0 , n2 = 0 , n = s.size();
    bool f = true;
    //0~n1一定已排序,0~n2一定未排序
    for(int i = 0 ; i < n ;i ++){
        if(s[i] == '0'){
            if(cnt < 2 || cnt == n1)f = false;
            if(n2 == 0)n2 = cnt;
        }else if(s[i] == '1'){
            if(n2 != 0)f = false;
            n1 = cnt;
        }else if(s[i] == '+'){
            cnt ++;
        }else if(s[i] == '-'){
            cnt --;
            if(cnt < n1)n1 = cnt;
            if(cnt < n2)n2 = 0;
        }
    }
    if(f)cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        solve();
    }
}