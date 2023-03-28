#include <bits/stdc++.h>

using namespace std;

bool solve(){
    int n;
    int x = 0 , y = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0 ; i < s.length() ; i ++){
        if(s[i] == 'U')y++;
        else if(s[i] == 'R')x++;
        else if(s[i] == 'D')y--;
        else x--;
        if(x == 1 && y ==1)return true;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while(T --){
        if(solve())puts("YES");
        else puts("NO");
    }
    return 0;
}
