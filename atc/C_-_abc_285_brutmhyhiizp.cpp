#include <bits/stdc++.h>
using namespace std;
long long res;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    for(int i = 0 ; i < len; i ++){
        res += (s[i] - 'A' + 1) * pow(26,len - i - 1);
    }
    printf("%lld",res);
    return 0;
}