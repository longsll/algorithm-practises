#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T --){
        string s;
        cin >> s;
        int ans = 1 , k = 0;
        for(int i = 1 ; i < s.size() ; i ++){
            if(s[i] != s[i - 1]){
                ans ++;
                if(s[i] == '1' && s[i - 1] == '0')k = 1;
            }
        }
        if(k)ans --;
        cout << ans << endl;
    }
    return 0;
}