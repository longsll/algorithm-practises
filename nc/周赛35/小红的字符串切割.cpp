#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() / 2 ; i ++)cout << s[i];
    cout << endl;
    for(int i = s.size() / 2 ; i < s.size() ; i ++)cout << s[i];
    return 0;
}