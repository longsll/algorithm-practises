#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    bool f = true;
    long long n  ,m;
    cin >> n >> m;
    if(m > n * (n - 1))f = false;
    map<int,vector<int> > mi;
    for(int i = 0 ; i < n ; i ++){
        int x;
        cin >> x;
        mi[x].push_back(i + 1);
    }
    int ld = -1 , lp = -1;
    vector<pair<int,int>>ans;
    for(auto& [x , v] : mi){
        if(x == 0){
            if(v.size() != 1)f = false;
            ld = 0 , lp = 1;
            continue;
        }
        if(x - ld != 1)f = false;
        for(auto& p : v){
            ans.emplace_back(lp , p);
            m --;
        }
        ld = x , lp = v[0];
    }
    if(m < 0)f = false;
    if(m > 0)
    for(auto& [x , v] : mi){
        for(int i = 0 ; i < v.size() ; i ++){
            for(int j = i + 1 ; j < v.size() ; j ++){
                ans.emplace_back(v[i] , v[j]);
                m --;
                if(m <= 0)break;
            }
            if(m <= 0)break;
        }
        if(m <= 0)break;
    }
    vector<int> l;
    if(m > 0)
    for(auto& [x , v] : mi){
        for(int i = 1 ; i < l.size() ; i ++){
            for(int j = 0 ; j < v.size() ; j ++){
                ans.emplace_back(l[i] , v[j]);
                m --;
                if(m <= 0)break;
            }
            if(m <= 0)break;
        }
        l = std::move(v);
        if(m <= 0)break;
    }
    if(m != 0)f = false;
    if(!f){
        cout << "-1";
        return 0;
    }
    for(auto [x , y] : ans){
        cout << x << " " << y << endl;
    }
    return 0;
}