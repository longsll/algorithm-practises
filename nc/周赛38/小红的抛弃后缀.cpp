#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    int tot = 0;
    for(int i = 0 ; i < s.size() ; i ++){
        int x = s[i] - '0';
        tot += x;
        if(tot % 9 == 0){
            ans ++;
        }
    }
    cout << ans ;
    return 0;
}