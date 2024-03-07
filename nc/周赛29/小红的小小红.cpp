#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<char , int> m;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0 ; i < n ; i ++){
        m[s[i]]++;
    }
    m['x']--;
    m['i']--;
    m['a']--;
    m['o']-= 2;
    m['h']--;
    m['n']--;
    m['g']--;
    cout << "xiaohong";
    for(auto x : m){
        for(int i = 0 ; i < x.second ; i ++)cout << x.first;
    }
    return 0;
}