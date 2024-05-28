#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    if(n == 1){
        if(stoi(s) % 4 == 0)cout << 0;
        else cout << -1;
        return 0;
    }
    s+=s;
    for (int i=0; i<s.size()/2; i++) 
    if (stoi(s.substr(s.size()/2+i-2, 2))%4==0)
    {
        cout<<i<<endl;
        return 0;
    }
    cout << -1;
    return 0;
}