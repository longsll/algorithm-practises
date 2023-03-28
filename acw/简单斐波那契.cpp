#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
int s[50];

int main()
{
    cin >> n;
    s[0] = 0;
    s[1] = 1;
    for(int i = 2 ; i < 50 ; i ++){
        s[i] = s[i - 1]  + s[i - 2];
    }
    for(int i = 0 ; i < n ; i ++)cout << s[i] << " ";
    return 0;
}
