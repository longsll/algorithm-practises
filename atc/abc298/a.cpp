#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool f = true;
    for(int i = 0 ; i < n ; i ++){
        if(s[i] == 'o')f = true;
        if(s[i] == 'x'){
            f = false;
            break;
        }
    }
    if(f){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}