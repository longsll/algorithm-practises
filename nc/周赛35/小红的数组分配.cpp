#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int>m;
    for(int i = 0 ; i< 2 * n ; i ++){
        int x;
        cin >> x;
        m[x] ++;
    }
    vector<int> ans;
    bool f = false;
    for(auto [x , y] : m){
        if(y&1)f = true;
        for(int i = 0 ; i < y / 2 ; i ++){
            ans.push_back(x);
        }
    }
    if(f){
        cout << "-1";
        return 0;
    }
    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}