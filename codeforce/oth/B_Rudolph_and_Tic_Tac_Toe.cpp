#include <bits/stdc++.h>

using namespace std;

char s[5][5];

bool che1(char t){
    for(int i = 1 ; i <= 3 ; i ++){
        if(s[i][1] == t && s[i][2] == t && s[i][3] == t){
            return true;
        }
    }
    for(int i = 1 ; i <= 3 ; i ++){
        if(s[1][i] == t && s[2][i] == t && s[3][i] == t){
            return true;
        }
    }
    if(s[1][1] == t && s[2][2] == t && s[3][3] == t){
        return true;
    }
    if(s[1][3] == t && s[2][2] == t && s[3][1] == t){
        return true;
    }
    return false;
}

void solve()
{
    for(int i = 1 ; i <= 3 ; i ++){
        for(int j = 1 ; j <= 3 ; j ++){
            cin >> s[i][j];
        }
    }
    if(che1('+')){
        cout << "+" << endl;
    }else if(che1('O')){
        cout << "O" << endl;
    }else if(che1('X')){
        cout << "X" << endl;
    }else{
        cout << "DRAW" << endl;
    }
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