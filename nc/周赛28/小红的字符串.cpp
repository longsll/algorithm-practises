#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> ss;
    for(int i = 0 ; i < s.size() - 1 ; i ++){
        ss.push_back(s.substr(i , 2));
    }
    sort(ss.begin() , ss.end());
    for(auto x : ss){
        cout << x << endl;
    }
    return 0;
}