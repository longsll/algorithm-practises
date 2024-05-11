#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T --){
        string s;
        cin >> s;
        bool ans = false;
        if(s.size() == 1){
            cout << "NO\n";
            continue;
        }
        for(int i = 1 ; i < s.size() ; i ++){
            if(s[i] != s[i - 1]){
                ans = true;
                swap(s[i] , s[i - 1]);
                break;
            }
        }
        if(ans){
            cout << "YES\n";
            cout << s << "\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}